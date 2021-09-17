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
#include "Windows.UI.Notifications.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile;
typedef interface __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics;
typedef interface __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3;
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
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdater __x_ABI_CWindows_CUI_CNotifications_CITileUpdater;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_StartScreen_IDualSimTile[] = L"Windows.Phone.StartScreen.IDualSimTile";
typedef struct __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPinnedToStart )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileVtbl;
interface __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_IsPinnedToStart(This,value) )
    ( (This)->lpVtbl->CreateAsync(This,operation) )
    ( (This)->lpVtbl->UpdateAsync(This,operation) )
    ( (This)->lpVtbl->DeleteAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_StartScreen_IDualSimTileStatics[] = L"Windows.Phone.StartScreen.IDualSimTileStatics";
typedef struct __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTileForSim2 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTile * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDisplayNameForSim1Async )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForSim1 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * updater
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForSim2 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * updater
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForSim1 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * updater
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForSim2 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * updater
        );
    HRESULT ( STDMETHODCALLTYPE *CreateToastNotifierForSim1 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * notifier
        );
    HRESULT ( STDMETHODCALLTYPE *CreateToastNotifierForSim2 )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * notifier
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStaticsVtbl;
interface __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTileForSim2(This,result) )
    ( (This)->lpVtbl->UpdateDisplayNameForSim1Async(This,name,operation) )
    ( (This)->lpVtbl->CreateTileUpdaterForSim1(This,updater) )
    ( (This)->lpVtbl->CreateTileUpdaterForSim2(This,updater) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForSim1(This,updater) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForSim2(This,updater) )
    ( (This)->lpVtbl->CreateToastNotifierForSim1(This,notifier) )
    ( (This)->lpVtbl->CreateToastNotifierForSim2(This,notifier) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CStartScreen_CIDualSimTileStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_StartScreen_IToastNotificationManagerStatics3[] = L"Windows.Phone.StartScreen.IToastNotificationManagerStatics3";
typedef struct __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateToastNotifierForSecondaryTile )(
        __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3 * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * notifier
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3Vtbl;
interface __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateToastNotifierForSecondaryTile(This,tileId,notifier) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CStartScreen_CIToastNotificationManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_StartScreen_DualSimTile[] = L"Windows.Phone.StartScreen.DualSimTile";
       
       
#pragma clang diagnostic pop
