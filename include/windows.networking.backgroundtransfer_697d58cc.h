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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Notifications.h"
#include "Windows.Web.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3;
typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;
typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl;
interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;
typedef struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl;
interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange;
typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;
interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
typedef struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;
interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                       struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;
interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                       __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                       __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;
typedef struct __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;
interface __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;
typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;
interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;
typedef struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;
interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;
typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;
interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CFoundation__CUri __FIVector_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CUri;
typedef struct __FIVector_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *value);
    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CUriVtbl;
interface __FIVector_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CWeb_CWebErrorStatus;
typedef interface __FIIterator_1_Windows__CWeb__CWebErrorStatus __FIIterator_1_Windows__CWeb__CWebErrorStatus;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CWebErrorStatus;
typedef struct __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl;
interface __FIIterator_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CWebErrorStatus __FIIterable_1_Windows__CWeb__CWebErrorStatus;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CWebErrorStatus;
typedef struct __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CWebErrorStatus **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl;
interface __FIIterable_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CWebErrorStatus __FIVectorView_1_Windows__CWeb__CWebErrorStatus;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CWebErrorStatus;
typedef struct __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                       enum __x_ABI_CWindows_CWeb_CWebErrorStatus item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl;
interface __FIVectorView_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CWebErrorStatus __FIVector_1_Windows__CWeb__CWebErrorStatus;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CWebErrorStatus;
typedef struct __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CWeb_CWebErrorStatus *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CWeb_CWebErrorStatus *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CWebErrorStatus **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl;
interface __FIVector_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
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
typedef interface __FIReference_1_Windows__CWeb__CWebErrorStatus __FIReference_1_Windows__CWeb__CWebErrorStatus;
EXTERN_C const IID IID___FIReference_1_Windows__CWeb__CWebErrorStatus;
typedef struct __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *value);
    END_INTERFACE
} __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl;
interface __FIReference_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification __x_ABI_CWindows_CUI_CNotifications_CITileNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification __x_ABI_CWindows_CUI_CNotifications_CIToastNotification;
typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;
typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior;
typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy;
typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority;
typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus;
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress;
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange;
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress;
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior
{
    BackgroundTransferBehavior_Parallel = 0,
    BackgroundTransferBehavior_Serialized = 1,
};
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy
{
    BackgroundTransferCostPolicy_Default = 0,
    BackgroundTransferCostPolicy_UnrestrictedOnly = 1,
    BackgroundTransferCostPolicy_Always = 2,
};
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority
{
    BackgroundTransferPriority_Default = 0,
    BackgroundTransferPriority_High = 1,
    BackgroundTransferPriority_Low = 2,
};
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus
{
    BackgroundTransferStatus_Idle = 0,
    BackgroundTransferStatus_Running = 1,
    BackgroundTransferStatus_PausedByApplication = 2,
    BackgroundTransferStatus_PausedCostedNetwork = 3,
    BackgroundTransferStatus_PausedNoNetwork = 4,
    BackgroundTransferStatus_Completed = 5,
    BackgroundTransferStatus_Canceled = 6,
    BackgroundTransferStatus_Error = 7,
    BackgroundTransferStatus_PausedRecoverableWebErrorStatus = 8,
    BackgroundTransferStatus_PausedSystemPolicy = 32,
};
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress
{
    UINT64 BytesReceived;
    UINT64 TotalBytesToReceive;
    __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus Status;
    boolean HasResponseChanged;
    boolean HasRestarted;
};
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange
{
    UINT64 Offset;
    UINT64 Length;
};
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress
{
    UINT64 BytesReceived;
    UINT64 BytesSent;
    UINT64 TotalBytesToReceive;
    UINT64 TotalBytesToSend;
    __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus Status;
    boolean HasResponseChanged;
    boolean HasRestarted;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateDownload )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateDownloadFromFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * requestBodyFile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDownloadAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * requestBodyStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDownload(This,uri,resultFile,operation) )
    ( (This)->lpVtbl->CreateDownloadFromFile(This,uri,resultFile,requestBodyFile,operation) )
    ( (This)->lpVtbl->CreateDownloadAsync(This,uri,resultFile,requestBodyStream,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransferGroup(This,value) )
    ( (This)->lpVtbl->put_TransferGroup(This,value) )
    ( (This)->lpVtbl->get_SuccessToastNotification(This,value) )
    ( (This)->lpVtbl->put_SuccessToastNotification(This,value) )
    ( (This)->lpVtbl->get_FailureToastNotification(This,value) )
    ( (This)->lpVtbl->put_FailureToastNotification(This,value) )
    ( (This)->lpVtbl->get_SuccessTileNotification(This,value) )
    ( (This)->lpVtbl->put_SuccessTileNotification(This,value) )
    ( (This)->lpVtbl->get_FailureTileNotification(This,value) )
    ( (This)->lpVtbl->put_FailureTileNotification(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader3";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompletionGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * completionGroup,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * * backgroundDownloader
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithCompletionGroup(This,completionGroup,backgroundDownloader) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    DEPRECATED("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")
                                HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsForGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
                  __RPC__in HSTRING group,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentDownloadsAsync(This,operation) )
DEPRECATED("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")
    ( (This)->lpVtbl->GetCurrentDownloadsForGroupAsync(This,group,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsForTransferGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * group,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentDownloadsForTransferGroupAsync(This,group,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent";
typedef struct
DEPRECATED("IBackgroundDownloaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestUnconstrainedDownloadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * operations,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->RequestUnconstrainedDownloadsAsync(This,operations,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferBase";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __RPC__in HSTRING headerName,
                  __RPC__in HSTRING headerValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                               HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                               HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
                  __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetRequestHeader(This,headerName,headerValue) )
    ( (This)->lpVtbl->get_ServerCredential(This,credential) )
    ( (This)->lpVtbl->put_ServerCredential(This,credential) )
    ( (This)->lpVtbl->get_ProxyCredential(This,credential) )
    ( (This)->lpVtbl->put_ProxyCredential(This,credential) )
    ( (This)->lpVtbl->get_Method(This,value) )
    ( (This)->lpVtbl->put_Method(This,value) )
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    ( (This)->lpVtbl->get_Group(This,value) )
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    ( (This)->lpVtbl->put_Group(This,value) )
    ( (This)->lpVtbl->get_CostPolicy(This,value) )
    ( (This)->lpVtbl->put_CostPolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Trigger )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Trigger(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->Enable(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Downloads )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uploads )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Downloads(This,value) )
    ( (This)->lpVtbl->get_Uploads(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetHeader )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                  __RPC__in HSTRING headerName,
                  __RPC__in HSTRING headerValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetHeader(This,headerName,headerValue) )
    ( (This)->lpVtbl->SetText(This,value) )
    ( (This)->lpVtbl->SetFile(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithName )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithNameAndFileName )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING fileName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithName(This,name,value) )
    ( (This)->lpVtbl->CreateWithNameAndFileName(This,name,fileName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
                  INT32 hresult,
                           __RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransferBehavior )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransferBehavior )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
                  __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_TransferBehavior(This,value) )
    ( (This)->lpVtbl->put_TransferBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateGroup(This,name,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Guid )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestedUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                               HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                  __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResultStreamAt )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                  UINT64 position,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResponseInformation )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Guid(This,value) )
    ( (This)->lpVtbl->get_RequestedUri(This,value) )
    ( (This)->lpVtbl->get_Method(This,value) )
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    ( (This)->lpVtbl->get_Group(This,value) )
    ( (This)->lpVtbl->get_CostPolicy(This,value) )
    ( (This)->lpVtbl->put_CostPolicy(This,value) )
    ( (This)->lpVtbl->GetResultStreamAt(This,position,value) )
    ( (This)->lpVtbl->GetResponseInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
                  __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Priority(This,value) )
    ( (This)->lpVtbl->put_Priority(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WasDownloadRestarted )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AddedRanges )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WasDownloadRestarted(This,value) )
    ( (This)->lpVtbl->get_AddedRanges(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateUpload )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * sourceFile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateUploadFromStreamAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * sourceStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateUploadWithFormDataAndAutoBoundaryAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateUploadWithSubTypeAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                  __RPC__in HSTRING subType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateUploadWithSubTypeAndBoundaryAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                  __RPC__in HSTRING subType,
                  __RPC__in HSTRING boundary,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateUpload(This,uri,sourceFile,operation) )
    ( (This)->lpVtbl->CreateUploadFromStreamAsync(This,uri,sourceStream,operation) )
    ( (This)->lpVtbl->CreateUploadWithFormDataAndAutoBoundaryAsync(This,uri,parts,operation) )
    ( (This)->lpVtbl->CreateUploadWithSubTypeAsync(This,uri,parts,subType,operation) )
    ( (This)->lpVtbl->CreateUploadWithSubTypeAndBoundaryAsync(This,uri,parts,subType,boundary,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransferGroup(This,value) )
    ( (This)->lpVtbl->put_TransferGroup(This,value) )
    ( (This)->lpVtbl->get_SuccessToastNotification(This,value) )
    ( (This)->lpVtbl->put_SuccessToastNotification(This,value) )
    ( (This)->lpVtbl->get_FailureToastNotification(This,value) )
    ( (This)->lpVtbl->put_FailureToastNotification(This,value) )
    ( (This)->lpVtbl->get_SuccessTileNotification(This,value) )
    ( (This)->lpVtbl->put_SuccessTileNotification(This,value) )
    ( (This)->lpVtbl->get_FailureTileNotification(This,value) )
    ( (This)->lpVtbl->put_FailureTileNotification(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader3";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompletionGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * completionGroup,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * * backgroundUploader
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithCompletionGroup(This,completionGroup,backgroundUploader) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    DEPRECATED("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")
                                HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsForGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
                  __RPC__in HSTRING group,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentUploadsAsync(This,operation) )
DEPRECATED("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")
    ( (This)->lpVtbl->GetCurrentUploadsForGroupAsync(This,group,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsForTransferGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * group,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentUploadsForTransferGroupAsync(This,group,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent";
typedef struct
DEPRECATED("IBackgroundUploaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestUnconstrainedUploadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * operations,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->RequestUnconstrainedUploadsAsync(This,operations,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcher";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentUris )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IndirectContentUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndirectContentUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentUris(This,value) )
    ( (This)->lpVtbl->put_IndirectContentUri(This,value) )
    ( (This)->lpVtbl->get_IndirectContentUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcherTime";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulPrefetchTime )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LastSuccessfulPrefetchTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResultFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AttachAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResultFile(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->AttachAsync(This,operation) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->Resume(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation2[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransferGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation3[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation3";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsRandomAccessRequired )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRandomAccessRequired )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResultRandomAccessStreamReference )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * stream
        );
    HRESULT ( STDMETHODCALLTYPE *GetDownloadedRanges )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RangesDownloaded )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RangesDownloaded )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                  EventRegistrationToken eventCookie
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestedUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecoverableWebErrorStatuses )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CWebErrorStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentWebErrorStatus )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CWeb__CWebErrorStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsRandomAccessRequired(This,value) )
    ( (This)->lpVtbl->put_IsRandomAccessRequired(This,value) )
    ( (This)->lpVtbl->GetResultRandomAccessStreamReference(This,stream) )
    ( (This)->lpVtbl->GetDownloadedRanges(This,value) )
    ( (This)->lpVtbl->add_RangesDownloaded(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_RangesDownloaded(This,eventCookie) )
    ( (This)->lpVtbl->put_RequestedUri(This,value) )
    ( (This)->lpVtbl->get_RecoverableWebErrorStatuses(This,value) )
    ( (This)->lpVtbl->get_CurrentWebErrorStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation4[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation4";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MakeCurrentInTransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MakeCurrentInTransferGroup(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IResponseInformation[] = L"Windows.Networking.BackgroundTransfer.IResponseInformation";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsResumable )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsResumable(This,value) )
    ( (This)->lpVtbl->get_ActualUri(This,value) )
    ( (This)->lpVtbl->get_StatusCode(This,value) )
    ( (This)->lpVtbl->get_Headers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult";
typedef struct
DEPRECATED("IUnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsUnconstrained )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsUnconstrained(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AttachAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceFile(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->AttachAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation2[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation2";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransferGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation3[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation3";
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MakeCurrentInTransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3Vtbl;
interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MakeCurrentInTransferGroup(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.BackgroundDownloader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferError[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.BackgroundUploader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.ContentPrefetcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_DownloadOperation[] = L"Windows.Networking.BackgroundTransfer.DownloadOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ResponseInformation[] = L"Windows.Networking.BackgroundTransfer.ResponseInformation";
DEPRECATED("UnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UploadOperation[] = L"Windows.Networking.BackgroundTransfer.UploadOperation";
       
       
#pragma clang diagnostic pop
