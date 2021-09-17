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
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.Graphics.Printing.PrintTicket.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSessionStatus __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSessionStatus;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSubmittedStatus __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSubmittedStatus;
enum __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSessionStatus
{
    PrintWorkflowSessionStatus_Started = 0,
    PrintWorkflowSessionStatus_Completed = 1,
    PrintWorkflowSessionStatus_Aborted = 2,
    PrintWorkflowSessionStatus_Closed = 3,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSubmittedStatus
{
    PrintWorkflowSubmittedStatus_Succeeded = 0,
    PrintWorkflowSubmittedStatus_Canceled = 1,
    PrintWorkflowSubmittedStatus_Failed = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowBackgroundSession";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SetupRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSetupRequestedEventArgs * setupEventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SetupRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Submitted )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowBackgroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowSubmittedEventArgs * submittedEventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Submitted )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSessionStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSessionVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SetupRequested(This,setupEventHandler,token) )
    ( (This)->lpVtbl->remove_SetupRequested(This,token) )
    ( (This)->lpVtbl->add_Submitted(This,submittedEventHandler,token) )
    ( (This)->lpVtbl->remove_Submitted(This,token) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowBackgroundSetupRequestedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUserPrintTicketAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * * configuration
        );
    HRESULT ( STDMETHODCALLTYPE *SetRequiresUI )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUserPrintTicketAsync(This,operation) )
    ( (This)->lpVtbl->get_Configuration(This,configuration) )
    ( (This)->lpVtbl->SetRequiresUI(This) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSetupRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowConfiguration";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceAppDisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JobTitle )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfigurationVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceAppDisplayName(This,value) )
    ( (This)->lpVtbl->get_JobTitle(This,value) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowForegroundSession";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SetupRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSetupRequestedEventArgs * setupEventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SetupRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_XpsDataAvailable )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowForegroundSession_Windows__CGraphics__CPrinting__CWorkflow__CPrintWorkflowXpsDataAvailableEventArgs * xpsDataAvailableEventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_XpsDataAvailable )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSessionStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSessionVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SetupRequested(This,setupEventHandler,token) )
    ( (This)->lpVtbl->remove_SetupRequested(This,token) )
    ( (This)->lpVtbl->add_XpsDataAvailable(This,xpsDataAvailableEventHandler,token) )
    ( (This)->lpVtbl->remove_XpsDataAvailable(This,token) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowForegroundSetupRequestedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUserPrintTicketAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUserPrintTicketAsync(This,operation) )
    ( (This)->lpVtbl->get_Configuration(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSetupRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelSourceFileContent[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowObjectModelSourceFileContent";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContentVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelTargetPackage[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowObjectModelTargetPackage";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackageVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSourceContent";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetJobPrintTicketAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSourceSpoolDataAsStreamContent )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSourceSpoolDataAsXpsObjectModel )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelSourceFileContent * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContentVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetJobPrintTicketAsync(This,operation) )
    ( (This)->lpVtbl->GetSourceSpoolDataAsStreamContent(This,result) )
    ( (This)->lpVtbl->GetSourceSpoolDataAsXpsObjectModel(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSpoolStreamContent";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetInputStream )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContentVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetInputStream(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSpoolStreamContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowStreamTarget";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOutputStream )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTargetVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetOutputStream(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSubmittedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTarget )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * jobPrintTicket,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Operation(This,value) )
    ( (This)->lpVtbl->GetTarget(This,jobPrintTicket,result) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSubmittedOperation";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CPrintWorkflowSubmittedStatus status
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowConfiguration * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XpsContent )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSourceContent * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperationVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This,status) )
    ( (This)->lpVtbl->get_Configuration(This,value) )
    ( (This)->lpVtbl->get_XpsContent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowTarget";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetAsStream )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowStreamTarget * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetAsXpsObjectModelPackage )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowObjectModelTargetPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTargetVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetAsStream(This,value) )
    ( (This)->lpVtbl->get_TargetAsXpsObjectModelPackage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowTriggerDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrintWorkflowSession )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowBackgroundSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrintWorkflowSession(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowUIActivatedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrintWorkflowSession )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowForegroundSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrintWorkflowSession(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowUIActivatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs[] = L"Windows.Graphics.Printing.Workflow.IPrintWorkflowXpsDataAvailableEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowSubmittedOperation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Operation(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CWorkflow_CIPrintWorkflowXpsDataAvailableEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowBackgroundSession[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowBackgroundSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowBackgroundSetupRequestedEventArgs[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowBackgroundSetupRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowConfiguration[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowForegroundSession[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowForegroundSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowForegroundSetupRequestedEventArgs[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowForegroundSetupRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowObjectModelSourceFileContent[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowObjectModelSourceFileContent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowObjectModelTargetPackage[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowObjectModelTargetPackage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowSourceContent[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowSourceContent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowSpoolStreamContent[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowSpoolStreamContent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowStreamTarget[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowStreamTarget";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowSubmittedEventArgs[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowSubmittedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowSubmittedOperation[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowSubmittedOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowTarget[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowTarget";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowTriggerDetails[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowUIActivatedEventArgs[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowUIActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_Workflow_PrintWorkflowXpsDataAvailableEventArgs[] = L"Windows.Graphics.Printing.Workflow.PrintWorkflowXpsDataAvailableEventArgs";
       
       
#pragma clang diagnostic pop
