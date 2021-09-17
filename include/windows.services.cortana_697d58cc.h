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
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettings __x_ABI_CWindows_CServices_CCortana_CICortanaSettings;
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics;
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission;
typedef interface __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CCortana__CCortanaPermission;
typedef struct __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__out enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl;
interface __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CCortana__CCortanaPermission;
typedef struct __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl;
interface __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, __RPC__out enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission __x_ABI_CWindows_CServices_CCortana_CCortanaPermission;
typedef enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult;
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission
{
    CortanaPermission_BrowsingHistory = 0,
    CortanaPermission_Calendar = 1,
    CortanaPermission_CallHistory = 2,
    CortanaPermission_Contacts = 3,
    CortanaPermission_Email = 4,
    CortanaPermission_InputPersonalization = 5,
    CortanaPermission_Location = 6,
    CortanaPermission_Messaging = 7,
    CortanaPermission_Microphone = 8,
    CortanaPermission_Personalization = 9,
    CortanaPermission_PhoneCall = 10,
};
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult
{
    CortanaPermissionsChangeResult_Success = 0,
    CortanaPermissionsChangeResult_Unavailable = 1,
    CortanaPermissionsChangeResult_DisabledByPolicy = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaActionableInsights[] = L"Windows.Services.Cortana.ICortanaActionableInsights";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsAvailableAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsForImageAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * imageStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsForImageWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * imageStream,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsForTextAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsForTextWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in HSTRING text,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * datapackage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowInsightsWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * datapackage,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->IsAvailableAsync(This,operation) )
    ( (This)->lpVtbl->ShowInsightsForImageAsync(This,imageStream,operation) )
    ( (This)->lpVtbl->ShowInsightsForImageWithOptionsAsync(This,imageStream,options,operation) )
    ( (This)->lpVtbl->ShowInsightsForTextAsync(This,text,operation) )
    ( (This)->lpVtbl->ShowInsightsForTextWithOptionsAsync(This,text,options,operation) )
    ( (This)->lpVtbl->ShowInsightsAsync(This,datapackage,operation) )
    ( (This)->lpVtbl->ShowInsightsWithOptionsAsync(This,datapackage,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaActionableInsightsOptions[] = L"Windows.Services.Cortana.ICortanaActionableInsightsOptions";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentSourceWebLink )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentSourceWebLink )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SurroundingText )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SurroundingText )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptionsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentSourceWebLink(This,value) )
    ( (This)->lpVtbl->put_ContentSourceWebLink(This,value) )
    ( (This)->lpVtbl->get_SurroundingText(This,value) )
    ( (This)->lpVtbl->put_SurroundingText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaActionableInsightsStatics[] = L"Windows.Services.Cortana.ICortanaActionableInsightsStatics";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsights * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStaticsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaActionableInsightsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManager[] = L"Windows.Services.Cortana.ICortanaPermissionsManager";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ArePermissionsGrantedAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * getGrantedPermissionsOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GrantPermissionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * grantOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RevokePermissionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * revokeOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
    ( (This)->lpVtbl->ArePermissionsGrantedAsync(This,permissions,getGrantedPermissionsOperation) )
    ( (This)->lpVtbl->GrantPermissionsAsync(This,permissions,grantOperation) )
    ( (This)->lpVtbl->RevokePermissionsAsync(This,permissions,revokeOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManagerStatics[] = L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettings[] = L"Windows.Services.Cortana.ICortanaSettings";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasUserConsentToVoiceActivation )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVoiceActivationEnabled )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVoiceActivationEnabled )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasUserConsentToVoiceActivation(This,value) )
    ( (This)->lpVtbl->get_IsVoiceActivationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsVoiceActivationEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettingsStatics[] = L"Windows.Services.Cortana.ICortanaSettingsStatics";
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl;
interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,value) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaActionableInsights[] = L"Windows.Services.Cortana.CortanaActionableInsights";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaActionableInsightsOptions[] = L"Windows.Services.Cortana.CortanaActionableInsightsOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaPermissionsManager[] = L"Windows.Services.Cortana.CortanaPermissionsManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaSettings[] = L"Windows.Services.Cortana.CortanaSettings";
       
       
#pragma clang diagnostic pop
