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
#include "Windows.ApplicationModel.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Background.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.ApplicationModel.Wallet.h"
#include "Windows.Graphics.Printing.h"
#include "Windows.System.h"
#include "Windows.Web.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIView __x_ABI_CWindows_CUI_CWebUI_CIWebUIView;
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics;
typedef interface __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView;
typedef interface __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIViewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIViewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView;
typedef struct __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWebUI__CWebUIView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * This, __RPC__out __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIViewVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIViewVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBarcodeScannerPreviewActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBarcodeScannerPreviewActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;
typedef enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation __x_ABI_CWindows_CApplicationModel_CISuspendingOperation;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl __x_ABI_CWindows_CWeb_CUI_CIWebViewControl;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2;
typedef enum __x_ABI_CWindows_CUI_CWebUI_CPrintContent __x_ABI_CWindows_CUI_CWebUI_CPrintContent;
enum __x_ABI_CWindows_CUI_CWebUI_CPrintContent
{
    PrintContent_AllPages = 0,
    PrintContent_CurrentPage = 1,
    PrintContent_CustomPageRange = 2,
    PrintContent_CurrentSelection = 3,
};
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * eventArgs
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,eventArgs) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * eventArgs
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,eventArgs) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This,
                  __RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedDeferral[] = L"Windows.UI.WebUI.IActivatedDeferral";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedEventArgsDeferral[] = L"Windows.UI.WebUI.IActivatedEventArgsDeferral";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivatedOperation )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivatedOperation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedOperation[] = L"Windows.UI.WebUI.IActivatedOperation";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IHtmlPrintDocumentSource[] = L"Windows.UI.WebUI.IHtmlPrintDocumentSource";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWebUI_CPrintContent * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  __x_ABI_CWindows_CUI_CWebUI_CPrintContent value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TopMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TopMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BottomMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BottomMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnableHeaderFooter )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EnableHeaderFooter )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShrinkToFit )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShrinkToFit )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentScale )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__out FLOAT * pScalePercent
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PercentScale )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  FLOAT scalePercent
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageRange )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                           __RPC__deref_out_opt HSTRING * pstrPageRange
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetPageRange )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
                  __RPC__in HSTRING strPageRange,
                           __RPC__out boolean * pfSuccess
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->get_LeftMargin(This,value) )
    ( (This)->lpVtbl->put_LeftMargin(This,value) )
    ( (This)->lpVtbl->get_TopMargin(This,value) )
    ( (This)->lpVtbl->put_TopMargin(This,value) )
    ( (This)->lpVtbl->get_RightMargin(This,value) )
    ( (This)->lpVtbl->put_RightMargin(This,value) )
    ( (This)->lpVtbl->get_BottomMargin(This,value) )
    ( (This)->lpVtbl->put_BottomMargin(This,value) )
    ( (This)->lpVtbl->get_EnableHeaderFooter(This,value) )
    ( (This)->lpVtbl->put_EnableHeaderFooter(This,value) )
    ( (This)->lpVtbl->get_ShrinkToFit(This,value) )
    ( (This)->lpVtbl->put_ShrinkToFit(This,value) )
    ( (This)->lpVtbl->get_PercentScale(This,pScalePercent) )
    ( (This)->lpVtbl->put_PercentScale(This,scalePercent) )
    ( (This)->lpVtbl->get_PageRange(This,pstrPageRange) )
    ( (This)->lpVtbl->TrySetPageRange(This,strPageRange,pfSuccess) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_INewWebUIViewCreatedEventArgs[] = L"Windows.UI.WebUI.INewWebUIViewCreatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebUIView )(
        __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivatedEventArgs )(
        __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasPendingNavigate )(
        __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebUIView(This,value) )
    ( (This)->lpVtbl->get_ActivatedEventArgs(This,value) )
    ( (This)->lpVtbl->get_HasPendingNavigate(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CINewWebUIViewCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics[] = L"Windows.UI.WebUI.IWebUIActivationStatics";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Suspending )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Suspending )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Resuming )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Resuming )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Navigated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Navigated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Activated(This,handler,token) )
    ( (This)->lpVtbl->remove_Activated(This,token) )
    ( (This)->lpVtbl->add_Suspending(This,handler,token) )
    ( (This)->lpVtbl->remove_Suspending(This,token) )
    ( (This)->lpVtbl->add_Resuming(This,handler,token) )
    ( (This)->lpVtbl->remove_Resuming(This,token) )
    ( (This)->lpVtbl->add_Navigated(This,handler,token) )
    ( (This)->lpVtbl->remove_Navigated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics2[] = L"Windows.UI.WebUI.IWebUIActivationStatics2";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_LeavingBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LeavingBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnteredBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnteredBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *EnablePrelaunch )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_LeavingBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_LeavingBackground(This,token) )
    ( (This)->lpVtbl->add_EnteredBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_EnteredBackground(This,token) )
    ( (This)->lpVtbl->EnablePrelaunch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics3[] = L"Windows.UI.WebUI.IWebUIActivationStatics3";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestRestartAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
                  __RPC__in HSTRING launchArguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRestartForUserAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING launchArguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestRestartAsync(This,launchArguments,operation) )
    ( (This)->lpVtbl->RequestRestartForUserAsync(This,user,launchArguments,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics4[] = L"Windows.UI.WebUI.IWebUIActivationStatics4";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_NewWebUIViewCreated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CWebUI__CNewWebUIViewCreatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NewWebUIViewCreated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BackgroundActivated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIBackgroundActivatedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BackgroundActivated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_NewWebUIViewCreated(This,handler,token) )
    ( (This)->lpVtbl->remove_NewWebUIViewCreated(This,token) )
    ( (This)->lpVtbl->add_BackgroundActivated(This,handler,token) )
    ( (This)->lpVtbl->remove_BackgroundActivated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstance";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
                           __RPC__out boolean * succeeded
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Succeeded )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
                  boolean succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Succeeded(This,succeeded) )
    ( (This)->lpVtbl->put_Succeeded(This,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstanceStatics[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * * backgroundTaskInstance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,backgroundTaskInstance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedDeferral[] = L"Windows.UI.WebUI.IWebUINavigatedDeferral";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedEventArgs[] = L"Windows.UI.WebUI.IWebUINavigatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NavigatedOperation )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NavigatedOperation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedOperation[] = L"Windows.UI.WebUI.IWebUINavigatedOperation";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIView[] = L"Windows.UI.WebUI.IWebUIView";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ApplicationViewId )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                           __RPC__out INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWebUI__CWebUIView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IgnoreApplicationContentUriRulesNavigationRestrictions )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IgnoreApplicationContentUriRulesNavigationRestrictions )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIView * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ApplicationViewId(This,value) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_Activated(This,handler,token) )
    ( (This)->lpVtbl->remove_Activated(This,token) )
    ( (This)->lpVtbl->get_IgnoreApplicationContentUriRulesNavigationRestrictions(This,value) )
    ( (This)->lpVtbl->put_IgnoreApplicationContentUriRulesNavigationRestrictions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIViewStatics[] = L"Windows.UI.WebUI.IWebUIViewStatics";
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithUriAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CWebUI__CWebUIView * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,operation) )
    ( (This)->lpVtbl->CreateWithUriAsync(This,uri,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIViewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedDeferral[] = L"Windows.UI.WebUI.ActivatedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedOperation[] = L"Windows.UI.WebUI.ActivatedOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_BackgroundActivatedEventArgs[] = L"Windows.UI.WebUI.BackgroundActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_EnteredBackgroundEventArgs[] = L"Windows.UI.WebUI.EnteredBackgroundEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_HtmlPrintDocumentSource[] = L"Windows.UI.WebUI.HtmlPrintDocumentSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_LeavingBackgroundEventArgs[] = L"Windows.UI.WebUI.LeavingBackgroundEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_NewWebUIViewCreatedEventArgs[] = L"Windows.UI.WebUI.NewWebUIViewCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingDeferral[] = L"Windows.UI.WebUI.SuspendingDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingEventArgs[] = L"Windows.UI.WebUI.SuspendingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingOperation[] = L"Windows.UI.WebUI.SuspendingOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIApplication[] = L"Windows.UI.WebUI.WebUIApplication";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstanceRuntimeClass";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBarcodeScannerPreviewActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIBarcodeScannerPreviewActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICachedFileUpdaterActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICameraSettingsActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICommandLineActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactCallActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMapActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMessageActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPanelActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPickerActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPostActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactVideoCallActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDeviceActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDevicePairingActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDialReceiverActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerContinuationEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerContinuationEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFolderPickerContinuationEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILaunchActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenCallActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenComponentActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedDeferral[] = L"Windows.UI.WebUI.WebUINavigatedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedEventArgs[] = L"Windows.UI.WebUI.WebUINavigatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedOperation[] = L"Windows.UI.WebUI.WebUINavigatedOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrint3DWorkflowActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintTaskSettingsActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintWorkflowForegroundTaskActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolForResultsActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIRestrictedLaunchActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUISearchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUISearchActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIShareTargetActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIStartupTaskActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIToastNotificationActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIUserDataAccountProviderActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIView[] = L"Windows.UI.WebUI.WebUIView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIVoiceCommandActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWalletActionActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWebAccountProviderActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIWebAuthenticationBrokerContinuationEventArgs";
       
       
#pragma clang diagnostic pop
