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
#include "Windows.Devices.Geolocation.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CBasicProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * This, __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicPropertiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CDocumentProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * This, __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentPropertiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CImageProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * This, __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImagePropertiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CMusicProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * This, __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicPropertiesVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnailVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CFileProperties__CVideoProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * This, __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoPropertiesVtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable;
typedef interface __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * This, __RPC__out __FIMap_2_HSTRING_IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CPhotoOrientation __x_ABI_CWindows_CStorage_CFileProperties_CPhotoOrientation;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailType __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailType;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CVideoOrientation __x_ABI_CWindows_CStorage_CFileProperties_CVideoOrientation;
enum __x_ABI_CWindows_CStorage_CFileProperties_CPhotoOrientation
{
    PhotoOrientation_Unspecified = 0,
    PhotoOrientation_Normal = 1,
    PhotoOrientation_FlipHorizontal = 2,
    PhotoOrientation_Rotate180 = 3,
    PhotoOrientation_FlipVertical = 4,
    PhotoOrientation_Transpose = 5,
    PhotoOrientation_Rotate270 = 6,
    PhotoOrientation_Transverse = 7,
    PhotoOrientation_Rotate90 = 8,
};
enum __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions
{
    PropertyPrefetchOptions_None = 0,
    PropertyPrefetchOptions_MusicProperties = 0x1,
    PropertyPrefetchOptions_VideoProperties = 0x2,
    PropertyPrefetchOptions_ImageProperties = 0x4,
    PropertyPrefetchOptions_DocumentProperties = 0x8,
    PropertyPrefetchOptions_BasicProperties = 0x10,
};
enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode
{
    ThumbnailMode_PicturesView = 0,
    ThumbnailMode_VideosView = 1,
    ThumbnailMode_MusicView = 2,
    ThumbnailMode_DocumentsView = 3,
    ThumbnailMode_ListView = 4,
    ThumbnailMode_SingleItem = 5,
};
enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions
{
    ThumbnailOptions_None = 0,
    ThumbnailOptions_ReturnOnlyIfCached = 0x1,
    ThumbnailOptions_ResizeThumbnail = 0x2,
    ThumbnailOptions_UseCurrentScale = 0x4,
};
enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailType
{
    ThumbnailType_Image = 0,
    ThumbnailType_Icon = 1,
};
enum __x_ABI_CWindows_CStorage_CFileProperties_CVideoOrientation
{
    VideoOrientation_Normal = 0,
    VideoOrientation_Rotate90 = 90,
    VideoOrientation_Rotate180 = 180,
    VideoOrientation_Rotate270 = 270,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IBasicProperties[] = L"Windows.Storage.FileProperties.IBasicProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIBasicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateModified )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemDate )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIBasicPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIBasicPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->get_DateModified(This,value) )
    ( (This)->lpVtbl->get_ItemDate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IDocumentProperties[] = L"Windows.Storage.FileProperties.IDocumentProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Comment )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Author(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->put_Comment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IGeotagHelperStatics[] = L"Windows.Storage.FileProperties.IGeotagHelperStatics";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetGeotagAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetGeotagFromGeolocatorAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * geolocator,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetGeotagAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * geopoint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetGeotagAsync(This,file,operation) )
    ( (This)->lpVtbl->SetGeotagFromGeolocatorAsync(This,file,geolocator,operation) )
    ( (This)->lpVtbl->SetGeotagAsync(This,file,geopoint,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIGeotagHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IImageProperties[] = L"Windows.Storage.FileProperties.IImageProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIImagePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTaken )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DateTaken )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Latitude )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Longitude )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraManufacturer )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CameraManufacturer )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraModel )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CameraModel )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CPhotoOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeopleNames )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIImagePropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIImagePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rating(This,value) )
    ( (This)->lpVtbl->put_Rating(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_DateTaken(This,value) )
    ( (This)->lpVtbl->put_DateTaken(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Latitude(This,value) )
    ( (This)->lpVtbl->get_Longitude(This,value) )
    ( (This)->lpVtbl->get_CameraManufacturer(This,value) )
    ( (This)->lpVtbl->put_CameraManufacturer(This,value) )
    ( (This)->lpVtbl->get_CameraModel(This,value) )
    ( (This)->lpVtbl->put_CameraModel(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_PeopleNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IMusicProperties[] = L"Windows.Storage.FileProperties.IMusicProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIMusicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Album )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Album )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Artist )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Artist )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Genre )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrackNumber )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumArtist )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlbumArtist )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Composers )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Conductors )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Producers )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Publisher )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Writers )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Year )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Year )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIMusicPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIMusicPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Album(This,value) )
    ( (This)->lpVtbl->put_Album(This,value) )
    ( (This)->lpVtbl->get_Artist(This,value) )
    ( (This)->lpVtbl->put_Artist(This,value) )
    ( (This)->lpVtbl->get_Genre(This,value) )
    ( (This)->lpVtbl->get_TrackNumber(This,value) )
    ( (This)->lpVtbl->put_TrackNumber(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Rating(This,value) )
    ( (This)->lpVtbl->put_Rating(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
    ( (This)->lpVtbl->get_AlbumArtist(This,value) )
    ( (This)->lpVtbl->put_AlbumArtist(This,value) )
    ( (This)->lpVtbl->get_Composers(This,value) )
    ( (This)->lpVtbl->get_Conductors(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->put_Subtitle(This,value) )
    ( (This)->lpVtbl->get_Producers(This,value) )
    ( (This)->lpVtbl->get_Publisher(This,value) )
    ( (This)->lpVtbl->put_Publisher(This,value) )
    ( (This)->lpVtbl->get_Writers(This,value) )
    ( (This)->lpVtbl->get_Year(This,value) )
    ( (This)->lpVtbl->put_Year(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IStorageItemContentProperties[] = L"Windows.Storage.FileProperties.IStorageItemContentProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMusicPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CMusicProperties * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CVideoProperties * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetImagePropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CImageProperties * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDocumentPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CDocumentProperties * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMusicPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetVideoPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetImagePropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetDocumentPropertiesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IStorageItemExtraProperties[] = L"Windows.Storage.FileProperties.IStorageItemExtraProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RetrievePropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMap_2_HSTRING_IInspectable * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SavePropertiesAsync )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * propertiesToSave,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SavePropertiesAsyncOverloadDefault )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RetrievePropertiesAsync(This,propertiesToRetrieve,operation) )
    ( (This)->lpVtbl->SavePropertiesAsync(This,propertiesToSave,operation) )
    ( (This)->lpVtbl->SavePropertiesAsyncOverloadDefault(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemExtraProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IThumbnailProperties[] = L"Windows.Storage.FileProperties.IThumbnailProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OriginalWidth )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalHeight )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReturnedSmallerCachedSize )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OriginalWidth(This,value) )
    ( (This)->lpVtbl->get_OriginalHeight(This,value) )
    ( (This)->lpVtbl->get_ReturnedSmallerCachedSize(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIThumbnailProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_FileProperties_IVideoProperties[] = L"Windows.Storage.FileProperties.IVideoProperties";
typedef struct __x_ABI_CWindows_CStorage_CFileProperties_CIVideoPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rating )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Latitude )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Longitude )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Producers )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Publisher )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Writers )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Year )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Year )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Directors )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CFileProperties_CVideoOrientation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CFileProperties_CIVideoPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CFileProperties_CIVideoPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rating(This,value) )
    ( (This)->lpVtbl->put_Rating(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Latitude(This,value) )
    ( (This)->lpVtbl->get_Longitude(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->put_Subtitle(This,value) )
    ( (This)->lpVtbl->get_Producers(This,value) )
    ( (This)->lpVtbl->get_Publisher(This,value) )
    ( (This)->lpVtbl->put_Publisher(This,value) )
    ( (This)->lpVtbl->get_Writers(This,value) )
    ( (This)->lpVtbl->get_Year(This,value) )
    ( (This)->lpVtbl->put_Year(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
    ( (This)->lpVtbl->get_Directors(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_BasicProperties[] = L"Windows.Storage.FileProperties.BasicProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_DocumentProperties[] = L"Windows.Storage.FileProperties.DocumentProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_GeotagHelper[] = L"Windows.Storage.FileProperties.GeotagHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_ImageProperties[] = L"Windows.Storage.FileProperties.ImageProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_MusicProperties[] = L"Windows.Storage.FileProperties.MusicProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_StorageItemContentProperties[] = L"Windows.Storage.FileProperties.StorageItemContentProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_StorageItemThumbnail[] = L"Windows.Storage.FileProperties.StorageItemThumbnail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileProperties_VideoProperties[] = L"Windows.Storage.FileProperties.VideoProperties";
       
       
#pragma clang diagnostic pop
