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
typedef interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp;
typedef interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics;
typedef interface __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef struct __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl;
interface __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef struct __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CInventory__CInstalledDesktopApp **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl;
interface __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopApp
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef struct __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                       __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl;
interface __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * This, __RPC__out __FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopAppVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Inventory_IInstalledDesktopApp[] = L"Windows.System.Inventory.IInstalledDesktopApp";
typedef struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayVersion )(
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl;
interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Publisher(This,value) )
    ( (This)->lpVtbl->get_DisplayVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Inventory_IInstalledDesktopAppStatics[] = L"Windows.System.Inventory.IInstalledDesktopAppStatics";
typedef struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetInventoryAsync )(
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CInventory__CInstalledDesktopApp * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetInventoryAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Inventory_InstalledDesktopApp[] = L"Windows.System.Inventory.InstalledDesktopApp";
       
       
#pragma clang diagnostic pop
