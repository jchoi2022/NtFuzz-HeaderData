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
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.h"
#include "Windows.Graphics.Imaging.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode;
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode
{
    CoreDragUIContentMode_Auto = 0,
    CoreDragUIContentMode_Deferred = 0x1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_TargetRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TargetRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                  EventRegistrationToken value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreConcurrentOperationsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreConcurrentOperationsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_TargetRequested(This,value,returnValue) )
    ( (This)->lpVtbl->remove_TargetRequested(This,value) )
    ( (This)->lpVtbl->get_AreConcurrentOperationsEnabled(This,value) )
    ( (This)->lpVtbl->put_AreConcurrentOperationsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->get_Modifiers(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                  UINT32 pointerId
        );
                    HRESULT ( STDMETHODCALLTYPE *SetDragUIContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
                    HRESULT ( STDMETHODCALLTYPE *SetDragUIContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragUIContentMode )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragUIContentMode )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                  __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->SetPointerId(This,pointerId) )
    ( (This)->lpVtbl->SetDragUIContentFromSoftwareBitmap(This,softwareBitmap) )
    ( (This)->lpVtbl->SetDragUIContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )
    ( (This)->lpVtbl->get_DragUIContentMode(This,value) )
    ( (This)->lpVtbl->put_DragUIContentMode(This,value) )
    ( (This)->lpVtbl->StartAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
                  __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )
    ( (This)->lpVtbl->put_AllowedOperations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsContentVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsContentVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Caption )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCaptionVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCaptionVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGlyphVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsGlyphVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmap(This,softwareBitmap) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )
    ( (This)->lpVtbl->get_IsContentVisible(This,value) )
    ( (This)->lpVtbl->put_IsContentVisible(This,value) )
    ( (This)->lpVtbl->get_Caption(This,value) )
    ( (This)->lpVtbl->put_Caption(This,value) )
    ( (This)->lpVtbl->get_IsCaptionVisible(This,value) )
    ( (This)->lpVtbl->put_IsCaptionVisible(This,value) )
    ( (This)->lpVtbl->get_IsGlyphVisible(This,value) )
    ( (This)->lpVtbl->put_IsGlyphVisible(This,value) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *EnterAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * dragUIOverride,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *OverAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * dragUIOverride,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *LeaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *DropAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->EnterAsync(This,dragInfo,dragUIOverride,returnValue) )
    ( (This)->lpVtbl->OverAsync(This,dragInfo,dragUIOverride,returnValue) )
    ( (This)->lpVtbl->LeaveAsync(This,dragInfo,returnValue) )
    ( (This)->lpVtbl->DropAsync(This,dragInfo,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetTarget )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * target
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetTarget(This,target) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs";
       
       
#pragma clang diagnostic pop
