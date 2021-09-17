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
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget;
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs;
typedef interface __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs;
typedef struct __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails;
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;
typedef struct __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl;
interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * sender, __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel;
typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode;
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation
{
    CausalityRelation_AssignDelegate = 0,
    CausalityRelation_Join = 1,
    CausalityRelation_Choice = 2,
    CausalityRelation_Cancel = 3,
    CausalityRelation_Error = 4,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource
{
    CausalitySource_Application = 0,
    CausalitySource_Library = 1,
    CausalitySource_System = 2,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork
{
    CausalitySynchronousWork_CompletionNotification = 0,
    CausalitySynchronousWork_ProgressNotification = 1,
    CausalitySynchronousWork_Execution = 2,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel
{
    CausalityTraceLevel_Required = 0,
    CausalityTraceLevel_Important = 1,
    CausalityTraceLevel_Verbose = 2,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions
{
    ErrorOptions_None = 0,
    ErrorOptions_SuppressExceptions = 0x1,
    ErrorOptions_ForceExceptions = 0x2,
    ErrorOptions_UseSetErrorInfo = 0x4,
    ErrorOptions_SuppressSetErrorInfo = 0x8,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat
{
    LoggingFieldFormat_Default = 0,
    LoggingFieldFormat_Hidden = 1,
    LoggingFieldFormat_String = 2,
    LoggingFieldFormat_Boolean = 3,
    LoggingFieldFormat_Hexadecimal = 4,
    LoggingFieldFormat_ProcessId = 5,
    LoggingFieldFormat_ThreadId = 6,
    LoggingFieldFormat_Port = 7,
    LoggingFieldFormat_Ipv4Address = 8,
    LoggingFieldFormat_Ipv6Address = 9,
    LoggingFieldFormat_SocketAddress = 10,
    LoggingFieldFormat_Xml = 11,
    LoggingFieldFormat_Json = 12,
    LoggingFieldFormat_Win32Error = 13,
    LoggingFieldFormat_NTStatus = 14,
    LoggingFieldFormat_HResult = 15,
    LoggingFieldFormat_FileTime = 16,
    LoggingFieldFormat_Signed = 17,
    LoggingFieldFormat_Unsigned = 18,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel
{
    LoggingLevel_Verbose = 0,
    LoggingLevel_Information = 1,
    LoggingLevel_Warning = 2,
    LoggingLevel_Error = 3,
    LoggingLevel_Critical = 4,
};
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode
{
    LoggingOpcode_Info = 0,
    LoggingOpcode_Start = 1,
    LoggingOpcode_Stop = 2,
    LoggingOpcode_Reply = 6,
    LoggingOpcode_Resume = 7,
    LoggingOpcode_Suspend = 8,
    LoggingOpcode_Send = 9,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics[] = L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TraceOperationCreation )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
                  GUID platformId,
                  UINT64 operationId,
                  __RPC__in HSTRING operationName,
                  UINT64 relatedContext
        );
    HRESULT ( STDMETHODCALLTYPE *TraceOperationCompletion )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
                  GUID platformId,
                  UINT64 operationId,
                  AsyncStatus status
        );
    HRESULT ( STDMETHODCALLTYPE *TraceOperationRelation )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
                  GUID platformId,
                  UINT64 operationId,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation relation
        );
    HRESULT ( STDMETHODCALLTYPE *TraceSynchronousWorkStart )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
                  GUID platformId,
                  UINT64 operationId,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork work
        );
    HRESULT ( STDMETHODCALLTYPE *TraceSynchronousWorkCompletion )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork work
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TracingStatusChanged )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TracingStatusChanged )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TraceOperationCreation(This,traceLevel,source,platformId,operationId,operationName,relatedContext) )
    ( (This)->lpVtbl->TraceOperationCompletion(This,traceLevel,source,platformId,operationId,status) )
    ( (This)->lpVtbl->TraceOperationRelation(This,traceLevel,source,platformId,operationId,relation) )
    ( (This)->lpVtbl->TraceSynchronousWorkStart(This,traceLevel,source,platformId,operationId,work) )
    ( (This)->lpVtbl->TraceSynchronousWorkCompletion(This,traceLevel,source,work) )
    ( (This)->lpVtbl->add_TracingStatusChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TracingStatusChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetails[] = L"Windows.Foundation.Diagnostics.IErrorDetails";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LongDescription )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HelpUri )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_LongDescription(This,value) )
    ( (This)->lpVtbl->get_HelpUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetailsStatics[] = L"Windows.Foundation.Diagnostics.IErrorDetailsStatics";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromHResultAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
                  INT32 errorCode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromHResultAsync(This,errorCode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorReportingSettings[] = L"Windows.Foundation.Diagnostics.IErrorReportingSettings";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetErrorOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions value
        );
    HRESULT ( STDMETHODCALLTYPE *GetErrorOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetErrorOptions(This,value) )
    ( (This)->lpVtbl->GetErrorOptions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSession[] = L"Windows.Foundation.Diagnostics.IFileLoggingSession";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
                    HRESULT ( STDMETHODCALLTYPE *AddLoggingChannelWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel maxLevel
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    HRESULT ( STDMETHODCALLTYPE *CloseAndSaveToFileAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LogFileGenerated )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LogFileGenerated )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->AddLoggingChannel(This,loggingChannel) )
    ( (This)->lpVtbl->AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) )
    ( (This)->lpVtbl->RemoveLoggingChannel(This,loggingChannel) )
    ( (This)->lpVtbl->CloseAndSaveToFileAsync(This,operation) )
    ( (This)->lpVtbl->add_LogFileGenerated(This,handler,token) )
    ( (This)->lpVtbl->remove_LogFileGenerated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_File(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity[] = L"Windows.Foundation.Diagnostics.ILoggingActivity";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity2[] = L"Windows.Foundation.Diagnostics.ILoggingActivity2";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *StopActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                  __RPC__in HSTRING stopEventName
        );
                    HRESULT ( STDMETHODCALLTYPE *StopActivityWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                  __RPC__in HSTRING stopEventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields
        );
                    HRESULT ( STDMETHODCALLTYPE *StopActivityWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
                  __RPC__in HSTRING stopEventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->StopActivity(This,stopEventName) )
    ( (This)->lpVtbl->StopActivityWithFields(This,stopEventName,fields) )
    ( (This)->lpVtbl->StopActivityWithFieldsAndOptions(This,stopEventName,fields,options) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivityFactory[] = L"Windows.Foundation.Diagnostics.ILoggingActivityFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLoggingActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
                  __RPC__in HSTRING activityName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * loggingActivity
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLoggingActivityWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
                  __RPC__in HSTRING activityName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * loggingActivity
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLoggingActivity(This,activityName,loggingChannel,loggingActivity) )
    ( (This)->lpVtbl->CreateLoggingActivityWithLevel(This,activityName,loggingChannel,level,loggingActivity) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel[] = L"Windows.Foundation.Diagnostics.ILoggingChannel";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Level )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *LogMessage )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  __RPC__in HSTRING eventString
        );
                    HRESULT ( STDMETHODCALLTYPE *LogMessageWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  __RPC__in HSTRING eventString,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
                    HRESULT ( STDMETHODCALLTYPE *LogValuePair )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  __RPC__in HSTRING value1,
                  INT32 value2
        );
                    HRESULT ( STDMETHODCALLTYPE *LogValuePairWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  __RPC__in HSTRING value1,
                  INT32 value2,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LoggingEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LoggingEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->get_Level(This,value) )
    ( (This)->lpVtbl->LogMessage(This,eventString) )
    ( (This)->lpVtbl->LogMessageWithLevel(This,eventString,level) )
    ( (This)->lpVtbl->LogValuePair(This,value1,value2) )
    ( (This)->lpVtbl->LogValuePairWithLevel(This,value1,value2,level) )
    ( (This)->lpVtbl->add_LoggingEnabled(This,handler,token) )
    ( (This)->lpVtbl->remove_LoggingEnabled(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel2[] = L"Windows.Foundation.Diagnostics.ILoggingChannel2";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")
    ( (This)->lpVtbl->Create(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory2[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithOptionsAndId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * options,
                  GUID id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithOptions(This,name,options,result) )
    ( (This)->lpVtbl->CreateWithOptionsAndId(This,name,options,id,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptions";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Group(This,value) )
    ( (This)->lpVtbl->put_Group(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
                  GUID group,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,group,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingFields[] = L"Windows.Foundation.Diagnostics.ILoggingFields";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
        );
                    HRESULT ( STDMETHODCALLTYPE *BeginStruct )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name
        );
                    HRESULT ( STDMETHODCALLTYPE *BeginStructWithTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT32 tags
        );
    HRESULT ( STDMETHODCALLTYPE *EndStruct )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
        );
                    HRESULT ( STDMETHODCALLTYPE *AddEmpty )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name
        );
                    HRESULT ( STDMETHODCALLTYPE *AddEmptyWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddEmptyWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  BYTE value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  BYTE value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  BYTE value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt8ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT16 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT16 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT16 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT16 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT16 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT16 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT16 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT16 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT16 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT16 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT16 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT16 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT32 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT32 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT32 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT32 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt32ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT32 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT32 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt32ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT32 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT64 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT64 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  INT64 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT64 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddInt64ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) INT64 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT64 value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT64 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT64 value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT64 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddUInt64ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) UINT64 * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingle )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  FLOAT value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingleWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  FLOAT value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingleWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  FLOAT value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingleArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) FLOAT * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingleArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) FLOAT * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSingleArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) FLOAT * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDouble )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  DOUBLE value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDoubleWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  DOUBLE value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDoubleWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  DOUBLE value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDoubleArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) DOUBLE * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDoubleArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) DOUBLE * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDoubleArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) DOUBLE * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  WCHAR value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  WCHAR value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  WCHAR value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) WCHAR * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) WCHAR * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddChar16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) WCHAR * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBoolean )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBooleanWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  boolean value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBooleanWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  boolean value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBooleanArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBooleanArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) boolean * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddBooleanArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) boolean * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddString )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddStringWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddStringWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddStringArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddStringArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) HSTRING * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddStringArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) HSTRING * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuid )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  GUID value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuidWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  GUID value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuidWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  GUID value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuidArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) GUID * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuidArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) GUID * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddGuidArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) GUID * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTime )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTimeWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CDateTime value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTimeWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CDateTime value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTimeArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTimeArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddDateTimeArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpan )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpanWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpanWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPoint )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPointWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CPoint value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPointWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CPoint value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPointArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPointArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPointArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSize )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSizeWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CSize value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSizeWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CSize value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSizeArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSizeArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddSizeArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRect )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRectWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CRect value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRectWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CFoundation_CRect value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRectArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRectArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
                    HRESULT ( STDMETHODCALLTYPE *AddRectArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
                  __RPC__in HSTRING name,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
                  INT32 tags
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->BeginStruct(This,name) )
    ( (This)->lpVtbl->BeginStructWithTags(This,name,tags) )
    ( (This)->lpVtbl->EndStruct(This) )
    ( (This)->lpVtbl->AddEmpty(This,name) )
    ( (This)->lpVtbl->AddEmptyWithFormat(This,name,format) )
    ( (This)->lpVtbl->AddEmptyWithFormatAndTags(This,name,format,tags) )
    ( (This)->lpVtbl->AddUInt8(This,name,value) )
    ( (This)->lpVtbl->AddUInt8WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddUInt8WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddUInt8Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddUInt8ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddUInt8ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddInt16(This,name,value) )
    ( (This)->lpVtbl->AddInt16WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddInt16WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddInt16Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddInt16ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddUInt16(This,name,value) )
    ( (This)->lpVtbl->AddUInt16WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddUInt16WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddUInt16Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddUInt16ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddUInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddInt32(This,name,value) )
    ( (This)->lpVtbl->AddInt32WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddInt32WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddInt32Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddInt32ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddUInt32(This,name,value) )
    ( (This)->lpVtbl->AddUInt32WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddUInt32WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddUInt32Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddUInt32ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddUInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddInt64(This,name,value) )
    ( (This)->lpVtbl->AddInt64WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddInt64WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddInt64Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddInt64ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddUInt64(This,name,value) )
    ( (This)->lpVtbl->AddUInt64WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddUInt64WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddUInt64Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddUInt64ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddUInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddSingle(This,name,value) )
    ( (This)->lpVtbl->AddSingleWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddSingleWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddSingleArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddSingleArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddSingleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddDouble(This,name,value) )
    ( (This)->lpVtbl->AddDoubleWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddDoubleWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddDoubleArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddDoubleArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddDoubleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddChar16(This,name,value) )
    ( (This)->lpVtbl->AddChar16WithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddChar16WithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddChar16Array(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddChar16ArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddChar16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddBoolean(This,name,value) )
    ( (This)->lpVtbl->AddBooleanWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddBooleanWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddBooleanArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddBooleanArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddBooleanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddString(This,name,value) )
    ( (This)->lpVtbl->AddStringWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddStringWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddStringArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddStringArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddStringArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddGuid(This,name,value) )
    ( (This)->lpVtbl->AddGuidWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddGuidWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddGuidArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddGuidArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddGuidArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddDateTime(This,name,value) )
    ( (This)->lpVtbl->AddDateTimeWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddDateTimeWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddDateTimeArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddDateTimeArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddDateTimeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddTimeSpan(This,name,value) )
    ( (This)->lpVtbl->AddTimeSpanWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddTimeSpanWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddTimeSpanArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddTimeSpanArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddTimeSpanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddPoint(This,name,value) )
    ( (This)->lpVtbl->AddPointWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddPointWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddPointArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddPointArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddPointArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddSize(This,name,value) )
    ( (This)->lpVtbl->AddSizeWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddSizeWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddSizeArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddSizeArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddSizeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
    ( (This)->lpVtbl->AddRect(This,name,value) )
    ( (This)->lpVtbl->AddRectWithFormat(This,name,value,format) )
    ( (This)->lpVtbl->AddRectWithFormatAndTags(This,name,value,format,tags) )
    ( (This)->lpVtbl->AddRectArray(This,name,__valueSize,value) )
    ( (This)->lpVtbl->AddRectArrayWithFormat(This,name,__valueSize,value,format) )
    ( (This)->lpVtbl->AddRectArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptions[] = L"Windows.Foundation.Diagnostics.ILoggingOptions";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Keywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  INT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Task )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out INT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Task )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  INT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Opcode )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opcode )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  GUID value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelatedActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelatedActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->put_Keywords(This,value) )
    ( (This)->lpVtbl->get_Tags(This,value) )
    ( (This)->lpVtbl->put_Tags(This,value) )
    ( (This)->lpVtbl->get_Task(This,value) )
    ( (This)->lpVtbl->put_Task(This,value) )
    ( (This)->lpVtbl->get_Opcode(This,value) )
    ( (This)->lpVtbl->put_Opcode(This,value) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->put_ActivityId(This,value) )
    ( (This)->lpVtbl->get_RelatedActivityId(This,value) )
    ( (This)->lpVtbl->put_RelatedActivityId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithKeywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
                  INT64 keywords,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithKeywords(This,keywords,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSession[] = L"Windows.Foundation.Diagnostics.ILoggingSession";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToFileAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                  __RPC__in HSTRING fileName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AddLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
                    HRESULT ( STDMETHODCALLTYPE *AddLoggingChannelWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel maxLevel
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->SaveToFileAsync(This,folder,fileName,operation) )
    ( (This)->lpVtbl->AddLoggingChannel(This,loggingChannel) )
    ( (This)->lpVtbl->AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) )
    ( (This)->lpVtbl->RemoveLoggingChannel(This,loggingChannel) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.ILoggingSessionFactory";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingTarget[] = L"Windows.Foundation.Diagnostics.ILoggingTarget";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsEnabledWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsEnabledWithLevelAndKeywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                  INT64 keywords,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LogEvent )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING eventName
        );
                    HRESULT ( STDMETHODCALLTYPE *LogEventWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING eventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields
        );
                    HRESULT ( STDMETHODCALLTYPE *LogEventWithFieldsAndLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING eventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
                    HRESULT ( STDMETHODCALLTYPE *LogEventWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING eventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options
        );
                    HRESULT ( STDMETHODCALLTYPE *StartActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING startEventName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartActivityWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING startEventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartActivityWithFieldsAndLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING startEventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartActivityWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
                  __RPC__in HSTRING startEventName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
                  __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsEnabled(This,result) )
    ( (This)->lpVtbl->IsEnabledWithLevel(This,level,result) )
    ( (This)->lpVtbl->IsEnabledWithLevelAndKeywords(This,level,keywords,result) )
    ( (This)->lpVtbl->LogEvent(This,eventName) )
    ( (This)->lpVtbl->LogEventWithFields(This,eventName,fields) )
    ( (This)->lpVtbl->LogEventWithFieldsAndLevel(This,eventName,fields,level) )
    ( (This)->lpVtbl->LogEventWithFieldsAndOptions(This,eventName,fields,level,options) )
    ( (This)->lpVtbl->StartActivity(This,startEventName,result) )
    ( (This)->lpVtbl->StartActivityWithFields(This,startEventName,fields,result) )
    ( (This)->lpVtbl->StartActivityWithFieldsAndLevel(This,startEventName,fields,level,result) )
    ( (This)->lpVtbl->StartActivityWithFieldsAndOptions(This,startEventName,fields,level,options,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
                           __RPC__out boolean * enabled
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TraceLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Enabled(This,enabled) )
    ( (This)->lpVtbl->get_TraceLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer[] = L"Windows.Foundation.Diagnostics.AsyncCausalityTracer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_ErrorDetails[] = L"Windows.Foundation.Diagnostics.ErrorDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_FileLoggingSession[] = L"Windows.Foundation.Diagnostics.FileLoggingSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingActivity[] = L"Windows.Foundation.Diagnostics.LoggingActivity";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannel[] = L"Windows.Foundation.Diagnostics.LoggingChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.LoggingChannelOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingFields[] = L"Windows.Foundation.Diagnostics.LoggingFields";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingOptions[] = L"Windows.Foundation.Diagnostics.LoggingOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingSession[] = L"Windows.Foundation.Diagnostics.LoggingSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings[] = L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs";
       
       
#pragma clang diagnostic pop
