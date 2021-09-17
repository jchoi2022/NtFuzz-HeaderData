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
#include "Windows.UI.Composition.h"
#include "Windows.UI.WindowManagement.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Controls.Primitives.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_IInspectable_IInspectable __FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out IInspectable * *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out __FIKeyValuePair_2_IInspectable_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_IInspectable_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_IInspectable_IInspectable __FIMapView_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIMapView_2_IInspectable_IInspectable;
typedef struct __FIMapView_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                   __RPC__in IInspectable * key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__in IInspectable * key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_IInspectable_IInspectableVtbl;
interface __FIMapView_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMapView_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMap_2_IInspectable_IInspectable __FIMap_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIMap_2_IInspectable_IInspectable;
typedef struct __FIMap_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   IInspectable * key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, IInspectable * key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   IInspectable * key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, IInspectable * key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    END_INTERFACE
} __FIMap_2_IInspectable_IInspectableVtbl;
interface __FIMap_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMap_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason;
enum __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState
{
    DesignerAppViewState_Visible = 0,
    DesignerAppViewState_Hidden = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason
{
    XamlSourceFocusNavigationReason_Programmatic = 0,
    XamlSourceFocusNavigationReason_Restore = 1,
    XamlSourceFocusNavigationReason_First = 3,
    XamlSourceFocusNavigationReason_Last = 4,
    XamlSourceFocusNavigationReason_Left = 7,
    XamlSourceFocusNavigationReason_Up = 8,
    XamlSourceFocusNavigationReason_Right = 9,
    XamlSourceFocusNavigationReason_Down = 10,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExitCode )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExitCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManager[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManager";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DesignerAppExited )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DesignerAppExited )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNewViewAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                  __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState initialViewState,
                  __x_ABI_CWindows_CFoundation_CSize initialViewSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadObjectIntoAppAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
                  __RPC__in HSTRING dllName,
                  GUID classId,
                  __RPC__in HSTRING initializationData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )
    ( (This)->lpVtbl->add_DesignerAppExited(This,handler,token) )
    ( (This)->lpVtbl->remove_DesignerAppExited(This,token) )
    ( (This)->lpVtbl->CreateNewViewAsync(This,initialViewState,initialViewSize,operation) )
    ( (This)->lpVtbl->LoadObjectIntoAppAsync(This,dllName,classId,initializationData,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
                  __RPC__in HSTRING appUserModelId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,appUserModelId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppView[] = L"Windows.UI.Xaml.Hosting.IDesignerAppView";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ApplicationViewId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewState )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateViewAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
                  __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState viewState,
                  __x_ABI_CWindows_CFoundation_CSize viewSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ApplicationViewId(This,value) )
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )
    ( (This)->lpVtbl->get_ViewState(This,value) )
    ( (This)->lpVtbl->get_ViewSize(This,value) )
    ( (This)->lpVtbl->UpdateViewAsync(This,viewState,viewSize,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TakeFocusRequested )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TakeFocusRequested )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * request,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->get_HasFocus(This,value) )
    ( (This)->lpVtbl->add_TakeFocusRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_TakeFocusRequested(This,token) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->NavigateFocus(This,request,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreview";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetElementVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementChildVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetElementChildVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * visual
        );
    HRESULT ( STDMETHODCALLTYPE *GetScrollViewerManipulationPropertySet )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer * scrollViewer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetElementVisual(This,element,result) )
    ( (This)->lpVtbl->GetElementChildVisual(This,element,result) )
    ( (This)->lpVtbl->SetElementChildVisual(This,element,visual) )
    ( (This)->lpVtbl->GetScrollViewerManipulationPropertySet(This,scrollViewer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetImplicitShowAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetImplicitHideAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsTranslationEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointerPositionPropertySet )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * targetElement,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetImplicitShowAnimation(This,element,animation) )
    ( (This)->lpVtbl->SetImplicitHideAnimation(This,element,animation) )
    ( (This)->lpVtbl->SetIsTranslationEnabled(This,element,value) )
    ( (This)->lpVtbl->GetPointerPositionPropertySet(This,targetElement,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics3[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAppWindowContent )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * appWindow,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * xamlContent
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppWindowContent )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * appWindow,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetAppWindowContent(This,appWindow,xamlContent) )
    ( (This)->lpVtbl->GetAppWindowContent(This,appWindow,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManager";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InitializeForCurrentThread )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InitializeForCurrentThread(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_HintRect(This,value) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRect )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
                  __x_ABI_CWindows_CFoundation_CRect hintRect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRectAndCorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
                  __x_ABI_CWindows_CFoundation_CRect hintRect,
                  GUID correlationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,reason,value) )
    ( (This)->lpVtbl->CreateInstanceWithHintRect(This,reason,hintRect,value) )
    ( (This)->lpVtbl->CreateInstanceWithHintRectAndCorrelationId(This,reason,hintRect,correlationId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WasFocusMoved )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WasFocusMoved(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
                  boolean focusMoved,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,focusMoved,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RootElement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RootElement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThemeKey )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThemeKey )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThemeResourcesXaml )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThemeResourcesXaml )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSize )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
                  INT32 width,
                  INT32 height
        );
    HRESULT ( STDMETHODCALLTYPE *Render )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Present )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RootElement(This,value) )
    ( (This)->lpVtbl->put_RootElement(This,value) )
    ( (This)->lpVtbl->get_ThemeKey(This,value) )
    ( (This)->lpVtbl->put_ThemeKey(This,value) )
    ( (This)->lpVtbl->get_ThemeResourcesXaml(This,value) )
    ( (This)->lpVtbl->put_ThemeResourcesXaml(This,value) )
    ( (This)->lpVtbl->SetSize(This,width,height) )
    ( (This)->lpVtbl->Render(This) )
    ( (This)->lpVtbl->Present(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResolveFileResource )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ResolveFileResource(This,path,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetGenericXamlFilePath )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetGenericXamlFilePath(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResolveDictionaryResource )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * dictionary,
                  __RPC__in_opt IInspectable * dictionaryKey,
                  __RPC__in_opt IInspectable * suggestedValue,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ResolveDictionaryResource(This,dictionary,dictionaryKey,suggestedValue,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompleteTimelinesAutomatically )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompleteTimelinesAutomatically )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHost )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * host
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyWindowSizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompleteTimelinesAutomatically(This,value) )
    ( (This)->lpVtbl->put_CompleteTimelinesAutomatically(This,value) )
    ( (This)->lpVtbl->SetHost(This,host) )
    ( (This)->lpVtbl->NotifyWindowSizeChanged(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFlyoutPlacementTargetInfo )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * placementTarget,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode preferredPlacement,
                   __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * targetPreferredPlacement,
                   __RPC__out boolean * allowFallbacks,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlyoutPlacement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
                  __x_ABI_CWindows_CFoundation_CRect placementTargetBounds,
                  __x_ABI_CWindows_CFoundation_CSize controlSize,
                  __x_ABI_CWindows_CFoundation_CSize minControlSize,
                  __x_ABI_CWindows_CFoundation_CRect containerRect,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode targetPreferredPlacement,
                  boolean allowFallbacks,
                   __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * chosenPlacement,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFlyoutPlacementTargetInfo(This,placementTarget,preferredPlacement,targetPreferredPlacement,allowFallbacks,returnValue) )
    ( (This)->lpVtbl->GetFlyoutPlacement(This,placementTargetBounds,controlSize,minControlSize,containerRect,targetPreferredPlacement,allowFallbacks,chosenPlacement,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppManager[] = L"Windows.UI.Xaml.Hosting.DesignerAppManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppView[] = L"Windows.UI.Xaml.Hosting.DesignerAppView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.ElementCompositionPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_WindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.WindowsXamlManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.XamlUIPresenter";
       
       
#pragma clang diagnostic pop
