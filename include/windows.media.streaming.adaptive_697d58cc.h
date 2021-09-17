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
#include "Windows.Media.Core.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType;
typedef interface __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType;
typedef struct __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, __RPC__out enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl;
interface __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
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
typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;
EXTERN_C const IID IID___FIReference_1_UINT64;
typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, __RPC__out unsigned __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;
interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClient __x_ABI_CWindows_CWeb_CHttp_CIHttpClient;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType;
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus
{
    AdaptiveMediaSourceCreationStatus_Success = 0,
    AdaptiveMediaSourceCreationStatus_ManifestDownloadFailure = 1,
    AdaptiveMediaSourceCreationStatus_ManifestParseFailure = 2,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestContentType = 3,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestVersion = 4,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestProfile = 5,
    AdaptiveMediaSourceCreationStatus_UnknownFailure = 6,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType
{
    AdaptiveMediaSourceDiagnosticType_ManifestUnchangedUponReload = 0,
    AdaptiveMediaSourceDiagnosticType_ManifestMismatchUponReload = 1,
    AdaptiveMediaSourceDiagnosticType_ManifestSignaledEndOfLiveEventUponReload = 2,
    AdaptiveMediaSourceDiagnosticType_MediaSegmentSkipped = 3,
    AdaptiveMediaSourceDiagnosticType_ResourceNotFound = 4,
    AdaptiveMediaSourceDiagnosticType_ResourceTimedOut = 5,
    AdaptiveMediaSourceDiagnosticType_ResourceParsingError = 6,
    AdaptiveMediaSourceDiagnosticType_BitrateDisabled = 7,
    AdaptiveMediaSourceDiagnosticType_FatalMediaSourceError = 8,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason
{
    AdaptiveMediaSourceDownloadBitrateChangedReason_SufficientInboundBitsPerSecond = 0,
    AdaptiveMediaSourceDownloadBitrateChangedReason_InsufficientInboundBitsPerSecond = 1,
    AdaptiveMediaSourceDownloadBitrateChangedReason_LowBufferLevel = 2,
    AdaptiveMediaSourceDownloadBitrateChangedReason_PositionChanged = 3,
    AdaptiveMediaSourceDownloadBitrateChangedReason_TrackSelectionChanged = 4,
    AdaptiveMediaSourceDownloadBitrateChangedReason_DesiredBitratesChanged = 5,
    AdaptiveMediaSourceDownloadBitrateChangedReason_ErrorInPreviousBitrate = 6,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType
{
    AdaptiveMediaSourceResourceType_Manifest = 0,
    AdaptiveMediaSourceResourceType_InitializationSegment = 1,
    AdaptiveMediaSourceResourceType_MediaSegment = 2,
    AdaptiveMediaSourceResourceType_Key = 3,
    AdaptiveMediaSourceResourceType_InitializationVector = 4,
    AdaptiveMediaSourceResourceType_MediaSegmentIndex = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsLive )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentDownloadBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPlaybackBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AvailableBitrates )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredMinBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredMinBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredMaxBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredMaxBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioOnlyPlayback )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecond )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecondWindow )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InboundBitsPerSecondWindow )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadRequested )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadRequested )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadCompleted )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadCompleted )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadFailed )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadFailed )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsLive(This,value) )
    ( (This)->lpVtbl->get_DesiredLiveOffset(This,value) )
    ( (This)->lpVtbl->put_DesiredLiveOffset(This,value) )
    ( (This)->lpVtbl->get_InitialBitrate(This,value) )
    ( (This)->lpVtbl->put_InitialBitrate(This,value) )
    ( (This)->lpVtbl->get_CurrentDownloadBitrate(This,value) )
    ( (This)->lpVtbl->get_CurrentPlaybackBitrate(This,value) )
    ( (This)->lpVtbl->get_AvailableBitrates(This,value) )
    ( (This)->lpVtbl->get_DesiredMinBitrate(This,value) )
    ( (This)->lpVtbl->put_DesiredMinBitrate(This,value) )
    ( (This)->lpVtbl->get_DesiredMaxBitrate(This,value) )
    ( (This)->lpVtbl->put_DesiredMaxBitrate(This,value) )
    ( (This)->lpVtbl->get_AudioOnlyPlayback(This,value) )
    ( (This)->lpVtbl->get_InboundBitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_InboundBitsPerSecondWindow(This,value) )
    ( (This)->lpVtbl->put_InboundBitsPerSecondWindow(This,value) )
    ( (This)->lpVtbl->add_DownloadBitrateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DownloadBitrateChanged(This,token) )
    ( (This)->lpVtbl->add_PlaybackBitrateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PlaybackBitrateChanged(This,token) )
    ( (This)->lpVtbl->add_DownloadRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_DownloadRequested(This,token) )
    ( (This)->lpVtbl->add_DownloadCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_DownloadCompleted(This,token) )
    ( (This)->lpVtbl->add_DownloadFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_DownloadFailed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdvancedSettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Diagnostics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCorrelatedTimes )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinLiveOffset(This,value) )
    ( (This)->lpVtbl->get_MaxSeekableWindowSize(This,value) )
    ( (This)->lpVtbl->get_DesiredSeekableWindowSize(This,value) )
    ( (This)->lpVtbl->put_DesiredSeekableWindowSize(This,value) )
    ( (This)->lpVtbl->get_Diagnostics(This,value) )
    ( (This)->lpVtbl->GetCorrelatedTimes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllSegmentsIndependent )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllSegmentsIndependent )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredBitrateHeadroomRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredBitrateHeadroomRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitrateDowngradeTriggerRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BitrateDowngradeTriggerRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllSegmentsIndependent(This,value) )
    ( (This)->lpVtbl->put_AllSegmentsIndependent(This,value) )
    ( (This)->lpVtbl->get_DesiredBitrateHeadroomRatio(This,value) )
    ( (This)->lpVtbl->put_DesiredBitrateHeadroomRatio(This,value) )
    ( (This)->lpVtbl->get_BitrateDowngradeTriggerRatio(This,value) )
    ( (This)->lpVtbl->put_BitrateDowngradeTriggerRatio(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationTimeStamp )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgramDateTime )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_PresentationTimeStamp(This,value) )
    ( (This)->lpVtbl->get_ProgramDateTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSource )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_MediaSource(This,value) )
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DiagnosticType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SegmentId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DiagnosticType(This,value) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_SegmentId(This,value) )
    ( (This)->lpVtbl->get_ResourceType(This,value) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs3";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceDuration )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceDuration(This,value) )
    ( (This)->lpVtbl->get_ResourceContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_DiagnosticAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DiagnosticAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_DiagnosticAvailable(This,handler,token) )
    ( (This)->lpVtbl->remove_DiagnosticAvailable(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldValue(This,value) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceType(This,value) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Statistics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_Statistics(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs3";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceDuration )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceDuration(This,value) )
    ( (This)->lpVtbl->get_ResourceContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceType(This,value) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Statistics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_Statistics(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs3";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceDuration )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceDuration(This,value) )
    ( (This)->lpVtbl->get_ResourceContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceType(This,value) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs3";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceDuration )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceDuration(This,value) )
    ( (This)->lpVtbl->get_ResourceContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputStream )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Buffer )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExtendedStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->put_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
    ( (This)->lpVtbl->put_InputStream(This,value) )
    ( (This)->lpVtbl->get_Buffer(This,value) )
    ( (This)->lpVtbl->put_Buffer(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->put_ContentType(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
    ( (This)->lpVtbl->put_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                  __RPC__in_opt __FIReference_1_UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
                  __RPC__in_opt __FIReference_1_UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->put_ResourceByteRangeOffset(This,value) )
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )
    ( (This)->lpVtbl->put_ResourceByteRangeLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentBytesReceivedCount )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeToHeadersReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeToFirstByteReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeToLastByteReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentBytesReceivedCount(This,value) )
    ( (This)->lpVtbl->get_TimeToHeadersReceived(This,value) )
    ( (This)->lpVtbl->get_TimeToFirstByteReceived(This,value) )
    ( (This)->lpVtbl->get_TimeToLastByteReceived(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioOnly )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldValue(This,value) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
    ( (This)->lpVtbl->get_AudioOnly(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsContentTypeSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                  __RPC__in HSTRING contentType,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUriAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUriWithDownloaderAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * httpClient,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in HSTRING contentType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamWithDownloaderAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in HSTRING contentType,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * httpClient,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsContentTypeSupported(This,contentType,result) )
    ( (This)->lpVtbl->CreateFromUriAsync(This,uri,result) )
    ( (This)->lpVtbl->CreateFromUriWithDownloaderAsync(This,uri,httpClient,result) )
    ( (This)->lpVtbl->CreateFromStreamAsync(This,stream,uri,contentType,result) )
    ( (This)->lpVtbl->CreateFromStreamWithDownloaderAsync(This,stream,uri,contentType,httpClient,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
       
       
#pragma clang diagnostic pop
