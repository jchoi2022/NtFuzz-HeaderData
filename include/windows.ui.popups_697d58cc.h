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
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialog __x_ABI_CWindows_CUI_CPopups_CIMessageDialog;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIPopupMenu __x_ABI_CWindows_CUI_CPopups_CIPopupMenu;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory;
typedef interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand __FIIterator_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand __FIIterable_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CPopups__CIUICommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand __FIVectorView_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                       __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CPopups__CIUICommand __FIVector_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CPopups__CIUICommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIVector_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef enum __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
enum __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions
{
    MessageDialogOptions_None = 0,
    MessageDialogOptions_AcceptUserInputAfterDelay = 0x1,
};
enum __x_ABI_CWindows_CUI_CPopups_CPlacement
{
    Placement_Default = 0,
    Placement_Above = 1,
    Placement_Below = 2,
    Placement_Left = 3,
    Placement_Right = 4,
};
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * command
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,command) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialog[] = L"Windows.UI.Popups.IMessageDialog";
typedef struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * messageDialogAsyncOperation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                           __RPC__out __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Options )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
                  __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialog
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Commands(This,value) )
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->get_CancelCommandIndex(This,value) )
    ( (This)->lpVtbl->put_CancelCommandIndex(This,value) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->ShowAsync(This,messageDialogAsyncOperation) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->put_Options(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialog;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialogFactory[] = L"Windows.UI.Popups.IMessageDialogFactory";
typedef struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
                  __RPC__in HSTRING content,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * * messageDialog
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
                  __RPC__in HSTRING content,
                  __RPC__in HSTRING title,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * * messageDialog
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,content,messageDialog) )
    ( (This)->lpVtbl->CreateWithTitle(This,content,title,messageDialog) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IPopupMenu[] = L"Windows.UI.Popups.IPopupMenu";
typedef struct __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                  __x_ABI_CWindows_CFoundation_CPoint invocationPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAsyncWithRect )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIPopupMenu
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Commands(This,value) )
    ( (This)->lpVtbl->ShowAsync(This,invocationPoint,asyncOperation) )
    ( (This)->lpVtbl->ShowAsyncWithRect(This,selection,asyncOperation) )
    ( (This)->lpVtbl->ShowAsyncWithRectAndPlacement(This,selection,preferredPlacement,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIPopupMenu;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommand[] = L"Windows.UI.Popups.IUICommand";
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Invoked )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIUICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Invoked(This,value) )
    ( (This)->lpVtbl->put_Invoked(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommandFactory[] = L"Windows.UI.Popups.IUICommandFactory";
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                  __RPC__in HSTRING label,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithHandler )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * action,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithHandlerAndId )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * action,
                  __RPC__in_opt IInspectable * commandId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,label,instance) )
    ( (This)->lpVtbl->CreateWithHandler(This,label,action,instance) )
    ( (This)->lpVtbl->CreateWithHandlerAndId(This,label,action,commandId,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_MessageDialog[] = L"Windows.UI.Popups.MessageDialog";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_PopupMenu[] = L"Windows.UI.Popups.PopupMenu";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommand[] = L"Windows.UI.Popups.UICommand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommandSeparator[] = L"Windows.UI.Popups.UICommandSeparator";
       
       
#pragma clang diagnostic pop
