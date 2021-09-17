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
typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2;
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics[] = L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAccessManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBlockingActive )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsBlockedNumberAsync )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowBlockNumbersUI )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * phoneNumbers,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowUnblockNumbersUI )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * phoneNumbers,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowBlockedCallsUI )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShowBlockedMessagesUI )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBlockingActive(This,value) )
    ( (This)->lpVtbl->IsBlockedNumberAsync(This,number,result) )
    ( (This)->lpVtbl->ShowBlockNumbersUI(This,phoneNumbers,value) )
    ( (This)->lpVtbl->ShowUnblockNumbersUI(This,phoneNumbers,value) )
    ( (This)->lpVtbl->ShowBlockedCallsUI(This) )
    ( (This)->lpVtbl->ShowBlockedMessagesUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics[] = L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAppActiveBlockingApp )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowCommunicationBlockingSettingsUI )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCurrentAppActiveBlockingApp(This,value) )
    ( (This)->lpVtbl->ShowCommunicationBlockingSettingsUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2[] = L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestSetAsActiveBlockingAppAsync )(
        __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestSetAsActiveBlockingAppAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_CommunicationBlocking_CommunicationBlockingAccessManager[] = L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_CommunicationBlocking_CommunicationBlockingAppManager[] = L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager";
       
       
#pragma clang diagnostic pop
