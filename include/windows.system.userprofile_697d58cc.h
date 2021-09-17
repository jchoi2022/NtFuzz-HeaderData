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
#include "Windows.Globalization.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings;
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics;
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, __RPC__out enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, __RPC__out enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CFoundation__CUri *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CFoundation__CUri;
typedef struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl;
interface __FIAsyncOperation_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CGlobalization_CDayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind;
typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult;
typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult;
enum
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind
{
    AccountPictureKind_SmallImage = 0,
    AccountPictureKind_LargeImage = 1,
    AccountPictureKind_Video = 2,
};
enum
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult
{
    SetAccountPictureResult_Success = 0,
    SetAccountPictureResult_ChangeDisabled = 1,
    SetAccountPictureResult_LargeOrDynamicError = 2,
    SetAccountPictureResult_VideoFrameSizeError = 3,
    SetAccountPictureResult_FileSizeError = 4,
    SetAccountPictureResult_Failure = 5,
};
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult
{
    SetImageFeedResult_Success = 0,
    SetImageFeedResult_ChangeDisabled = 1,
    SetImageFeedResult_UserCanceled = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerForUser[] = L"Windows.System.UserProfile.IAdvertisingManagerForUser";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdvertisingId )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdvertisingId(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdvertisingId )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdvertisingId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics2[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics2";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAssignedAccessSettings[] = L"Windows.System.UserProfile.IAssignedAccessSettings";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSingleAppKioskMode )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsSingleAppKioskMode(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAssignedAccessSettingsStatics[] = L"Windows.System.UserProfile.IAssignedAccessSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAssignedAccessSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettings[] = L"Windows.System.UserProfile.IDiagnosticsSettings";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanUseDiagnosticsToTailorExperiences )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanUseDiagnosticsToTailorExperiences(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettingsStatics[] = L"Windows.System.UserProfile.IDiagnosticsSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
    ( (This)->lpVtbl->GetForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettings[] = L"Windows.System.UserProfile.IFirstSignInSettings";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettingsStatics[] = L"Windows.System.UserProfile.IFirstSignInSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesForUser[] = L"Windows.System.UserProfile.IGlobalizationPreferencesForUser";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Calendars )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clocks )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Currencies )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HomeGeographicRegion )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekStartsOn )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUserVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_Calendars(This,value) )
    ( (This)->lpVtbl->get_Clocks(This,value) )
    ( (This)->lpVtbl->get_Currencies(This,value) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_HomeGeographicRegion(This,value) )
    ( (This)->lpVtbl->get_WeekStartsOn(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Calendars )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clocks )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Currencies )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HomeGeographicRegion )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekStartsOn )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Calendars(This,value) )
    ( (This)->lpVtbl->get_Clocks(This,value) )
    ( (This)->lpVtbl->get_Currencies(This,value) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_HomeGeographicRegion(This,value) )
    ( (This)->lpVtbl->get_WeekStartsOn(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics2[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics2";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetHomeGeographicRegion )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
                  __RPC__in HSTRING region,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetLanguages )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languageTags,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetHomeGeographicRegion(This,region,result) )
    ( (This)->lpVtbl->TrySetLanguages(This,languageTags,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics3[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics3";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesForUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3Vtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenImageFeedStatics[] = L"Windows.System.UserProfile.ILockScreenImageFeedStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestSetImageFeedAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * syndicationFeedUri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRemoveImageFeed )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestSetImageFeedAsync(This,syndicationFeedUri,value) )
    ( (This)->lpVtbl->TryRemoveImageFeed(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenStatics[] = L"Windows.System.UserProfile.ILockScreenStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OriginalImageFile )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetImageStream )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetImageFileAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * Operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetImageStreamAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * Operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OriginalImageFile(This,value) )
    ( (This)->lpVtbl->GetImageStream(This,value) )
    ( (This)->lpVtbl->SetImageFileAsync(This,value,Operation) )
    ( (This)->lpVtbl->SetImageStreamAsync(This,value,Operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserInformationStatics[] = L"Windows.System.UserProfile.IUserInformationStatics";
typedef struct
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AccountPictureChangeEnabled )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NameAccessAllowed )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetAccountPicture )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind kind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * storageFile
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetAccountPictureAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * image,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetAccountPicturesAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * smallImage,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * largeImage,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * video,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetAccountPictureFromStreamAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * image,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetAccountPicturesFromStreamsAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * smallImage,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * largeImage,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * video,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_AccountPictureChanged )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * changeHandler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_AccountPictureChanged )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetDisplayNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetFirstNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetLastNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetPrincipalNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetSessionInitiationProtocolUriAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
        );
    DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetDomainNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->get_AccountPictureChangeEnabled(This,value) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->get_NameAccessAllowed(This,value) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetAccountPicture(This,kind,storageFile) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->SetAccountPictureAsync(This,image,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->SetAccountPicturesAsync(This,smallImage,largeImage,video,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->SetAccountPictureFromStreamAsync(This,image,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->SetAccountPicturesFromStreamsAsync(This,smallImage,largeImage,video,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->add_AccountPictureChanged(This,changeHandler,token) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_AccountPictureChanged(This,token) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetDisplayNameAsync(This,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetFirstNameAsync(This,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetLastNameAsync(This,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetPrincipalNameAsync(This,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetSessionInitiationProtocolUriAsync(This,operation) )
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
    ( (This)->lpVtbl->GetDomainNameAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettings";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetLockScreenImageAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * imageFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetWallpaperImageAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * imageFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetLockScreenImageAsync(This,imageFile,operation) )
    ( (This)->lpVtbl->TrySetWallpaperImageAsync(This,imageFile,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManager[] = L"Windows.System.UserProfile.AdvertisingManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManagerForUser[] = L"Windows.System.UserProfile.AdvertisingManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AssignedAccessSettings[] = L"Windows.System.UserProfile.AssignedAccessSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_DiagnosticsSettings[] = L"Windows.System.UserProfile.DiagnosticsSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_FirstSignInSettings[] = L"Windows.System.UserProfile.FirstSignInSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_GlobalizationPreferences[] = L"Windows.System.UserProfile.GlobalizationPreferences";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_GlobalizationPreferencesForUser[] = L"Windows.System.UserProfile.GlobalizationPreferencesForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_LockScreen[] = L"Windows.System.UserProfile.LockScreen";
DEPRECATED("Use User instead of UserInformation. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserInformation[] = L"Windows.System.UserProfile.UserInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.UserProfilePersonalizationSettings";
       
       
#pragma clang diagnostic pop
