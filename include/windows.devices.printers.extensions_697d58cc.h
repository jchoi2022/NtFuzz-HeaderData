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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral;
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef enum __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowDetail __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowDetail;
typedef enum __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowStatus __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowStatus;
enum __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowDetail
{
    Print3DWorkflowDetail_Unknown = 0,
    Print3DWorkflowDetail_ModelExceedsPrintBed = 1,
    Print3DWorkflowDetail_UploadFailed = 2,
    Print3DWorkflowDetail_InvalidMaterialSelection = 3,
    Print3DWorkflowDetail_InvalidModel = 4,
    Print3DWorkflowDetail_ModelNotManifold = 5,
    Print3DWorkflowDetail_InvalidPrintTicket = 6,
};
enum __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowStatus
{
    Print3DWorkflowStatus_Abandoned = 0,
    Print3DWorkflowStatus_Canceled = 1,
    Print3DWorkflowStatus_Failed = 2,
    Print3DWorkflowStatus_Slicing = 3,
    Print3DWorkflowStatus_Submitted = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrint3DWorkflow[] = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceID )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrintModelPackage )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                           __RPC__deref_out_opt IInspectable * * printModelPackage
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPrintReady )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPrintReady )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PrintRequested )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrintRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PrintRequested )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceID(This,value) )
    ( (This)->lpVtbl->GetPrintModelPackage(This,printModelPackage) )
    ( (This)->lpVtbl->get_IsPrintReady(This,value) )
    ( (This)->lpVtbl->put_IsPrintReady(This,value) )
    ( (This)->lpVtbl->add_PrintRequested(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_PrintRequested(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2[] = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PrinterChanged )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflow_Windows__CDevices__CPrinters__CExtensions__CPrint3DWorkflowPrinterChangedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PrinterChanged )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2 * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2Vtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PrinterChanged(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_PrinterChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs[] = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetExtendedStatus )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                  __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CPrint3DWorkflowDetail value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                  __RPC__in_opt IInspectable * source
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceChanged )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->SetExtendedStatus(This,value) )
    ( (This)->lpVtbl->SetSource(This,source) )
    ( (This)->lpVtbl->SetSourceChanged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrintRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs[] = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewDeviceId )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflowPrinterChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic[] = L"Windows.Devices.Printers.Extensions.IPrintExtensionContextStatic";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromDeviceId )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt IInspectable * * context
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStaticVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromDeviceId(This,deviceId,context) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintExtensionContextStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails[] = L"Windows.Devices.Printers.Extensions.IPrintNotificationEventDetails";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrinterName )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EventData )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EventData )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrinterName(This,value) )
    ( (This)->lpVtbl->get_EventData(This,value) )
    ( (This)->lpVtbl->put_EventData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintNotificationEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration[] = L"Windows.Devices.Printers.Extensions.IPrintTaskConfiguration";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrinterExtensionContext )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                           __RPC__deref_out_opt IInspectable * * context
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SaveRequested )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfiguration_Windows__CDevices__CPrinters__CExtensions__CPrintTaskConfigurationSaveRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SaveRequested )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrinterExtensionContext(This,context) )
    ( (This)->lpVtbl->add_SaveRequested(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_SaveRequested(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest[] = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequest";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This
        );
    HRESULT ( STDMETHODCALLTYPE *Save )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                  __RPC__in_opt IInspectable * printerExtensionContext
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * * deferral
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Cancel(This) )
    ( (This)->lpVtbl->Save(This,printerExtensionContext) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral[] = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedDeferral";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferralVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs[] = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequest * * context
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,context) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfigurationSaveRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_Print3DWorkflow[] = L"Windows.Devices.Printers.Extensions.Print3DWorkflow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_Print3DWorkflowPrintRequestedEventArgs[] = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_Print3DWorkflowPrinterChangedEventArgs[] = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintExtensionContext[] = L"Windows.Devices.Printers.Extensions.PrintExtensionContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintNotificationEventDetails[] = L"Windows.Devices.Printers.Extensions.PrintNotificationEventDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintTaskConfiguration[] = L"Windows.Devices.Printers.Extensions.PrintTaskConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintTaskConfigurationSaveRequest[] = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintTaskConfigurationSaveRequestedDeferral[] = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Printers_Extensions_PrintTaskConfigurationSaveRequestedEventArgs[] = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedEventArgs";
       
       
#pragma clang diagnostic pop
