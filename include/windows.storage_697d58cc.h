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
#include "Windows.Storage.FileProperties.h"
#include "Windows.Storage.Provider.h"
#include "Windows.Storage.Search.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler;
typedef interface __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler;
typedef interface __x_ABI_CWindows_CStorage_CIAppDataPaths __x_ABI_CWindows_CStorage_CIAppDataPaths;
typedef interface __x_ABI_CWindows_CStorage_CIAppDataPathsStatics __x_ABI_CWindows_CStorage_CIAppDataPathsStatics;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationData __x_ABI_CWindows_CStorage_CIApplicationData;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationData2 __x_ABI_CWindows_CStorage_CIApplicationData2;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationData3 __x_ABI_CWindows_CStorage_CIApplicationData3;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationDataContainer __x_ABI_CWindows_CStorage_CIApplicationDataContainer;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationDataStatics __x_ABI_CWindows_CStorage_CIApplicationDataStatics;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 __x_ABI_CWindows_CStorage_CIApplicationDataStatics2;
typedef interface __x_ABI_CWindows_CStorage_CICachedFileManagerStatics __x_ABI_CWindows_CStorage_CICachedFileManagerStatics;
typedef interface __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics;
typedef interface __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2;
typedef interface __x_ABI_CWindows_CStorage_CIFileIOStatics __x_ABI_CWindows_CStorage_CIFileIOStatics;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics __x_ABI_CWindows_CStorage_CIKnownFoldersStatics;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2;
typedef interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3;
typedef interface __x_ABI_CWindows_CStorage_CIPathIOStatics __x_ABI_CWindows_CStorage_CIPathIOStatics;
typedef interface __x_ABI_CWindows_CStorage_CISetVersionDeferral __x_ABI_CWindows_CStorage_CISetVersionDeferral;
typedef interface __x_ABI_CWindows_CStorage_CISetVersionRequest __x_ABI_CWindows_CStorage_CISetVersionRequest;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile2 __x_ABI_CWindows_CStorage_CIStorageFile2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFileStatics __x_ABI_CWindows_CStorage_CIStorageFileStatics;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder2 __x_ABI_CWindows_CStorage_CIStorageFolder2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder3 __x_ABI_CWindows_CStorage_CIStorageFolder3;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolderStatics __x_ABI_CWindows_CStorage_CIStorageFolderStatics;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem2 __x_ABI_CWindows_CStorage_CIStorageItem2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItemProperties __x_ABI_CWindows_CStorage_CIStorageItemProperties;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItemProperties2 __x_ABI_CWindows_CStorage_CIStorageItemProperties2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibrary __x_ABI_CWindows_CStorage_CIStorageLibrary;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibrary2 __x_ABI_CWindows_CStorage_CIStorageLibrary2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibrary3 __x_ABI_CWindows_CStorage_CIStorageLibrary3;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryChange __x_ABI_CWindows_CStorage_CIStorageLibraryChange;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryStatics __x_ABI_CWindows_CStorage_CIStorageLibraryStatics;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageProvider __x_ABI_CWindows_CStorage_CIStorageProvider;
typedef interface __x_ABI_CWindows_CStorage_CIStorageProvider2 __x_ABI_CWindows_CStorage_CIStorageProvider2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageStreamTransaction __x_ABI_CWindows_CStorage_CIStorageStreamTransaction;
typedef interface __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest;
typedef interface __x_ABI_CWindows_CStorage_CISystemAudioProperties __x_ABI_CWindows_CStorage_CISystemAudioProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemDataPaths __x_ABI_CWindows_CStorage_CISystemDataPaths;
typedef interface __x_ABI_CWindows_CStorage_CISystemDataPathsStatics __x_ABI_CWindows_CStorage_CISystemDataPathsStatics;
typedef interface __x_ABI_CWindows_CStorage_CISystemGPSProperties __x_ABI_CWindows_CStorage_CISystemGPSProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemImageProperties __x_ABI_CWindows_CStorage_CISystemImageProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemMediaProperties __x_ABI_CWindows_CStorage_CISystemMediaProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemMusicProperties __x_ABI_CWindows_CStorage_CISystemMusicProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemPhotoProperties __x_ABI_CWindows_CStorage_CISystemPhotoProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemProperties __x_ABI_CWindows_CStorage_CISystemProperties;
typedef interface __x_ABI_CWindows_CStorage_CISystemVideoProperties __x_ABI_CWindows_CStorage_CISystemVideoProperties;
typedef interface __x_ABI_CWindows_CStorage_CIUserDataPaths __x_ABI_CWindows_CStorage_CIUserDataPaths;
typedef interface __x_ABI_CWindows_CStorage_CIUserDataPathsStatics __x_ABI_CWindows_CStorage_CIUserDataPathsStatics;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationDataContainer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CIStorageFile __FIIterator_1_Windows__CStorage__CIStorageFile;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageFile;
typedef struct __FIIterator_1_Windows__CStorage__CIStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageFileVtbl;
interface __FIIterator_1_Windows__CStorage__CIStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageFileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CIStorageFile __FIIterable_1_Windows__CStorage__CIStorageFile;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageFile;
typedef struct __FIIterable_1_Windows__CStorage__CIStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageFile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageFileVtbl;
interface __FIIterable_1_Windows__CStorage__CIStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CStorageFolder __FIIterator_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFolder __FIIterable_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFolder **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CStorageLibrary __FIIterator_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageLibrary * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageLibrary * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageLibrary __FIIterable_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageLibrary **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CStorageLibraryChange __FIIterator_1_Windows__CStorage__CStorageLibraryChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageLibraryChange;
typedef struct __FIIterator_1_Windows__CStorage__CStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageLibraryChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibraryChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageLibraryChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageLibraryChangeVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageLibraryChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageLibraryChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageLibraryChange __FIIterable_1_Windows__CStorage__CStorageLibraryChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageLibraryChange;
typedef struct __FIIterable_1_Windows__CStorage__CStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageLibraryChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageLibraryChangeVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageLibraryChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageLibraryChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer;
typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationDataContainer * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl;
interface __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFolder __FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       __x_ABI_CWindows_CStorage_CIStorageFolder * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CStorageFolder __FIVector_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStorageFolder;
typedef struct __FIVector_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFolder **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CIStorageFolder * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIVector_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder;
typedef interface __FIObservableVector_1_Windows__CStorage__CStorageFolder __FIObservableVector_1_Windows__CStorage__CStorageFolder;
typedef struct __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in_opt __FIObservableVector_1_Windows__CStorage__CStorageFolder *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolderVtbl;
interface __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_Windows__CStorage__CStorageFolder __FIObservableVector_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIObservableVector_1_Windows__CStorage__CStorageFolder;
typedef struct __FIObservableVector_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_Windows__CStorage__CStorageFolder *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CStorage__CStorageFolder * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIObservableVector_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIObservableVector_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIVectorView_1_Windows__CStorage__CIStorageItem __FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       __x_ABI_CWindows_CStorage_CIStorageItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       __x_ABI_CWindows_CStorage_CIStorageFile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CStorageLibraryChange __FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageLibraryChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                       __x_ABI_CWindows_CStorage_CIStorageLibraryChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageLibraryChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageLibraryChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CIStorageItem __FIVector_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CIStorageItem;
typedef struct __FIVector_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CIStorageItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CIStorageItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIVector_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CStorageFile __FIVector_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStorageFile;
typedef struct __FIVector_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This, __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFile * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CIStorageFile * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStorageFileVtbl;
interface __FIVector_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__out __FIVectorView_1_Windows__CStorage__CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * This, __RPC__out __FIVectorView_1_Windows__CStorage__CStorageLibraryChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CApplicationData __FIAsyncOperation_1_Windows__CStorage__CApplicationData;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CApplicationData *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationDataVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationDataVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CApplicationData __FIAsyncOperation_1_Windows__CStorage__CApplicationData;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CApplicationData;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CApplicationDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CApplicationData **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CApplicationData * This, __RPC__out __x_ABI_CWindows_CStorage_CIApplicationData * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CApplicationDataVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CApplicationData
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CApplicationDataVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageLibrary **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageLibrary * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CIApplicationData * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageLibrary * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__out enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVector_1_HSTRING __FIAsyncOperation_1___FIVector_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_HSTRING __FIAsyncOperation_1___FIVector_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_HSTRING * This, __RPC__out __FIVector_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVector_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties;
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
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CStorage_CApplicationDataCreateDisposition __x_ABI_CWindows_CStorage_CApplicationDataCreateDisposition;
typedef enum __x_ABI_CWindows_CStorage_CApplicationDataLocality __x_ABI_CWindows_CStorage_CApplicationDataLocality;
typedef enum __x_ABI_CWindows_CStorage_CCreationCollisionOption __x_ABI_CWindows_CStorage_CCreationCollisionOption;
typedef enum __x_ABI_CWindows_CStorage_CFileAccessMode __x_ABI_CWindows_CStorage_CFileAccessMode;
typedef enum __x_ABI_CWindows_CStorage_CFileAttributes __x_ABI_CWindows_CStorage_CFileAttributes;
typedef enum __x_ABI_CWindows_CStorage_CKnownFolderId __x_ABI_CWindows_CStorage_CKnownFolderId;
typedef enum __x_ABI_CWindows_CStorage_CKnownLibraryId __x_ABI_CWindows_CStorage_CKnownLibraryId;
typedef enum __x_ABI_CWindows_CStorage_CNameCollisionOption __x_ABI_CWindows_CStorage_CNameCollisionOption;
typedef enum __x_ABI_CWindows_CStorage_CStorageDeleteOption __x_ABI_CWindows_CStorage_CStorageDeleteOption;
typedef enum __x_ABI_CWindows_CStorage_CStorageItemTypes __x_ABI_CWindows_CStorage_CStorageItemTypes;
typedef enum __x_ABI_CWindows_CStorage_CStorageLibraryChangeType __x_ABI_CWindows_CStorage_CStorageLibraryChangeType;
typedef enum __x_ABI_CWindows_CStorage_CStorageOpenOptions __x_ABI_CWindows_CStorage_CStorageOpenOptions;
typedef enum __x_ABI_CWindows_CStorage_CStreamedFileFailureMode __x_ABI_CWindows_CStorage_CStreamedFileFailureMode;
enum __x_ABI_CWindows_CStorage_CApplicationDataCreateDisposition
{
    ApplicationDataCreateDisposition_Always = 0,
    ApplicationDataCreateDisposition_Existing = 1,
};
enum __x_ABI_CWindows_CStorage_CApplicationDataLocality
{
    ApplicationDataLocality_Local = 0,
    ApplicationDataLocality_Roaming = 1,
    ApplicationDataLocality_Temporary = 2,
    ApplicationDataLocality_LocalCache = 3,
};
enum __x_ABI_CWindows_CStorage_CCreationCollisionOption
{
    CreationCollisionOption_GenerateUniqueName = 0,
    CreationCollisionOption_ReplaceExisting = 1,
    CreationCollisionOption_FailIfExists = 2,
    CreationCollisionOption_OpenIfExists = 3,
};
enum __x_ABI_CWindows_CStorage_CFileAccessMode
{
    FileAccessMode_Read = 0,
    FileAccessMode_ReadWrite = 1,
};
enum __x_ABI_CWindows_CStorage_CFileAttributes
{
    FileAttributes_Normal = 0,
    FileAttributes_ReadOnly = 0x1,
    FileAttributes_Directory = 0x10,
    FileAttributes_Archive = 0x20,
    FileAttributes_Temporary = 0x100,
    FileAttributes_LocallyIncomplete = 0x200,
};
enum __x_ABI_CWindows_CStorage_CKnownFolderId
{
    KnownFolderId_AppCaptures = 0,
    KnownFolderId_CameraRoll = 1,
    KnownFolderId_DocumentsLibrary = 2,
    KnownFolderId_HomeGroup = 3,
    KnownFolderId_MediaServerDevices = 4,
    KnownFolderId_MusicLibrary = 5,
    KnownFolderId_Objects3D = 6,
    KnownFolderId_PicturesLibrary = 7,
    KnownFolderId_Playlists = 8,
    KnownFolderId_RecordedCalls = 9,
    KnownFolderId_RemovableDevices = 10,
    KnownFolderId_SavedPictures = 11,
    KnownFolderId_Screenshots = 12,
    KnownFolderId_VideosLibrary = 13,
    KnownFolderId_AllAppMods = 14,
    KnownFolderId_CurrentAppMods = 15,
};
enum __x_ABI_CWindows_CStorage_CKnownLibraryId
{
    KnownLibraryId_Music = 0,
    KnownLibraryId_Pictures = 1,
    KnownLibraryId_Videos = 2,
    KnownLibraryId_Documents = 3,
};
enum __x_ABI_CWindows_CStorage_CNameCollisionOption
{
    NameCollisionOption_GenerateUniqueName = 0,
    NameCollisionOption_ReplaceExisting = 1,
    NameCollisionOption_FailIfExists = 2,
};
enum __x_ABI_CWindows_CStorage_CStorageDeleteOption
{
    StorageDeleteOption_Default = 0,
    StorageDeleteOption_PermanentDelete = 1,
};
enum __x_ABI_CWindows_CStorage_CStorageItemTypes
{
    StorageItemTypes_None = 0,
    StorageItemTypes_File = 0x1,
    StorageItemTypes_Folder = 0x2,
};
enum __x_ABI_CWindows_CStorage_CStorageLibraryChangeType
{
    StorageLibraryChangeType_Created = 0,
    StorageLibraryChangeType_Deleted = 1,
    StorageLibraryChangeType_MovedOrRenamed = 2,
    StorageLibraryChangeType_ContentsChanged = 3,
    StorageLibraryChangeType_MovedOutOfLibrary = 4,
    StorageLibraryChangeType_MovedIntoLibrary = 5,
    StorageLibraryChangeType_ContentsReplaced = 6,
    StorageLibraryChangeType_IndexingStatusChanged = 7,
    StorageLibraryChangeType_EncryptionChanged = 8,
    StorageLibraryChangeType_ChangeTrackingLost = 9,
};
enum __x_ABI_CWindows_CStorage_CStorageOpenOptions
{
    StorageOpenOptions_None = 0,
    StorageOpenOptions_AllowOnlyReaders = 0x1,
    StorageOpenOptions_AllowReadersAndWriters = 0x2,
};
enum __x_ABI_CWindows_CStorage_CStreamedFileFailureMode
{
    StreamedFileFailureMode_Failed = 0,
    StreamedFileFailureMode_CurrentlyUnavailable = 1,
    StreamedFileFailureMode_Incomplete = 2,
};
typedef struct __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CISetVersionRequest * setVersionRequest
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandlerVtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,setVersionRequest) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler;
typedef struct __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * stream
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandlerVtbl;
interface __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,stream) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IAppDataPaths[] = L"Windows.Storage.IAppDataPaths";
typedef struct __x_ABI_CWindows_CStorage_CIAppDataPathsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cookies )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Desktop )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Documents )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Favorites )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_History )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InternetCache )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAppData )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgramData )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingAppData )(
        __x_ABI_CWindows_CStorage_CIAppDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIAppDataPathsVtbl;
interface __x_ABI_CWindows_CStorage_CIAppDataPaths
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIAppDataPathsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cookies(This,value) )
    ( (This)->lpVtbl->get_Desktop(This,value) )
    ( (This)->lpVtbl->get_Documents(This,value) )
    ( (This)->lpVtbl->get_Favorites(This,value) )
    ( (This)->lpVtbl->get_History(This,value) )
    ( (This)->lpVtbl->get_InternetCache(This,value) )
    ( (This)->lpVtbl->get_LocalAppData(This,value) )
    ( (This)->lpVtbl->get_ProgramData(This,value) )
    ( (This)->lpVtbl->get_RoamingAppData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIAppDataPaths;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IAppDataPathsStatics[] = L"Windows.Storage.IAppDataPathsStatics";
typedef struct __x_ABI_CWindows_CStorage_CIAppDataPathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIAppDataPaths * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CStorage_CIAppDataPathsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIAppDataPaths * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIAppDataPathsStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIAppDataPathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIAppDataPathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIAppDataPathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationData[] = L"Windows.Storage.IApplicationData";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVersionAsync )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                  UINT32 desiredVersion,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIApplicationDataSetVersionHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * setVersionOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ClearAllAsync )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * clearOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ClearAsync )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                  __x_ABI_CWindows_CStorage_CApplicationDataLocality locality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * clearOperation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalSettings )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationDataContainer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingSettings )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationDataContainer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TemporaryFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataChanged )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CApplicationData_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataChanged )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SignalDataChanged )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingStorageQuota )(
        __x_ABI_CWindows_CStorage_CIApplicationData * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationDataVtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationData
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->SetVersionAsync(This,desiredVersion,handler,setVersionOperation) )
    ( (This)->lpVtbl->ClearAllAsync(This,clearOperation) )
    ( (This)->lpVtbl->ClearAsync(This,locality,clearOperation) )
    ( (This)->lpVtbl->get_LocalSettings(This,value) )
    ( (This)->lpVtbl->get_RoamingSettings(This,value) )
    ( (This)->lpVtbl->get_LocalFolder(This,value) )
    ( (This)->lpVtbl->get_RoamingFolder(This,value) )
    ( (This)->lpVtbl->get_TemporaryFolder(This,value) )
    ( (This)->lpVtbl->add_DataChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DataChanged(This,token) )
    ( (This)->lpVtbl->SignalDataChanged(This) )
    ( (This)->lpVtbl->get_RoamingStorageQuota(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationData2[] = L"Windows.Storage.IApplicationData2";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationData2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalCacheFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationData2Vtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationData2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationData2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalCacheFolder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationData2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationData3[] = L"Windows.Storage.IApplicationData3";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationData3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPublisherCacheFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                  __RPC__in HSTRING folderName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPublisherCacheFolderAsync )(
        __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                  __RPC__in HSTRING folderName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * clearOperation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharedLocalFolder )(
        __x_ABI_CWindows_CStorage_CIApplicationData3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationData3Vtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationData3
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationData3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPublisherCacheFolder(This,folderName,value) )
    ( (This)->lpVtbl->ClearPublisherCacheFolderAsync(This,folderName,clearOperation) )
    ( (This)->lpVtbl->get_SharedLocalFolder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationData3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationDataContainer[] = L"Windows.Storage.IApplicationDataContainer";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationDataContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Locality )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CApplicationDataLocality * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Values )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Containers )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CApplicationDataContainer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateContainer )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CStorage_CApplicationDataCreateDisposition disposition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationDataContainer * * container
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteContainer )(
        __x_ABI_CWindows_CStorage_CIApplicationDataContainer * This,
                  __RPC__in HSTRING name
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationDataContainerVtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationDataContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationDataContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Locality(This,value) )
    ( (This)->lpVtbl->get_Values(This,value) )
    ( (This)->lpVtbl->get_Containers(This,value) )
    ( (This)->lpVtbl->CreateContainer(This,name,disposition,container) )
    ( (This)->lpVtbl->DeleteContainer(This,name) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationDataContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationDataStatics[] = L"Windows.Storage.IApplicationDataStatics";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationDataStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CStorage_CIApplicationDataStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationData * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationDataStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationDataStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationDataStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationDataStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IApplicationDataStatics2[] = L"Windows.Storage.IApplicationDataStatics2";
typedef struct __x_ABI_CWindows_CStorage_CIApplicationDataStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUserAsync )(
        __x_ABI_CWindows_CStorage_CIApplicationDataStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CApplicationData * * getForUserOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIApplicationDataStatics2Vtbl;
interface __x_ABI_CWindows_CStorage_CIApplicationDataStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIApplicationDataStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUserAsync(This,user,getForUserOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIApplicationDataStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ICachedFileManagerStatics[] = L"Windows.Storage.ICachedFileManagerStatics";
typedef struct __x_ABI_CWindows_CStorage_CICachedFileManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeferUpdates )(
        __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteUpdatesAsync )(
        __x_ABI_CWindows_CStorage_CICachedFileManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CICachedFileManagerStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CICachedFileManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CICachedFileManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DeferUpdates(This,file) )
    ( (This)->lpVtbl->CompleteUpdatesAsync(This,file,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CICachedFileManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IDownloadsFolderStatics[] = L"Windows.Storage.IDownloadsFolderStatics";
typedef struct __x_ABI_CWindows_CStorage_CIDownloadsFolderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFileAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileWithCollisionOptionAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderWithCollisionOptionAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics * This,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIDownloadsFolderStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIDownloadsFolderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFileAsync(This,desiredName,operation) )
    ( (This)->lpVtbl->CreateFolderAsync(This,desiredName,operation) )
    ( (This)->lpVtbl->CreateFileWithCollisionOptionAsync(This,desiredName,option,operation) )
    ( (This)->lpVtbl->CreateFolderWithCollisionOptionAsync(This,desiredName,option,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIDownloadsFolderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IDownloadsFolderStatics2[] = L"Windows.Storage.IDownloadsFolderStatics2";
typedef struct __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFileForUserAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderForUserAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileForUserWithCollisionOptionAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderForUserWithCollisionOptionAsync )(
        __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2Vtbl;
interface __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFileForUserAsync(This,user,desiredName,operation) )
    ( (This)->lpVtbl->CreateFolderForUserAsync(This,user,desiredName,operation) )
    ( (This)->lpVtbl->CreateFileForUserWithCollisionOptionAsync(This,user,desiredName,option,operation) )
    ( (This)->lpVtbl->CreateFolderForUserWithCollisionOptionAsync(This,user,desiredName,option,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIDownloadsFolderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IFileIOStatics[] = L"Windows.Storage.IFileIOStatics";
typedef struct __x_ABI_CWindows_CStorage_CIFileIOStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReadTextAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteTextAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING contents,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING contents,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendTextAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING contents,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING contents,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadLinesAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_HSTRING * * linesOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_HSTRING * * linesOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteLinesAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendLinesAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBufferAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBufferAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBytesAsync )(
        __x_ABI_CWindows_CStorage_CIFileIOStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIFileIOStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIFileIOStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIFileIOStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadTextAsync(This,file,textOperation) )
    ( (This)->lpVtbl->ReadTextWithEncodingAsync(This,file,encoding,textOperation) )
    ( (This)->lpVtbl->WriteTextAsync(This,file,contents,textOperation) )
    ( (This)->lpVtbl->WriteTextWithEncodingAsync(This,file,contents,encoding,textOperation) )
    ( (This)->lpVtbl->AppendTextAsync(This,file,contents,textOperation) )
    ( (This)->lpVtbl->AppendTextWithEncodingAsync(This,file,contents,encoding,textOperation) )
    ( (This)->lpVtbl->ReadLinesAsync(This,file,linesOperation) )
    ( (This)->lpVtbl->ReadLinesWithEncodingAsync(This,file,encoding,linesOperation) )
    ( (This)->lpVtbl->WriteLinesAsync(This,file,lines,operation) )
    ( (This)->lpVtbl->WriteLinesWithEncodingAsync(This,file,lines,encoding,operation) )
    ( (This)->lpVtbl->AppendLinesAsync(This,file,lines,operation) )
    ( (This)->lpVtbl->AppendLinesWithEncodingAsync(This,file,lines,encoding,operation) )
    ( (This)->lpVtbl->ReadBufferAsync(This,file,operation) )
    ( (This)->lpVtbl->WriteBufferAsync(This,file,buffer,operation) )
    ( (This)->lpVtbl->WriteBytesAsync(This,file,__bufferSize,buffer,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIFileIOStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersCameraRollStatics[] = L"Windows.Storage.IKnownFoldersCameraRollStatics";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CameraRoll )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CameraRoll(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersCameraRollStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersPlaylistsStatics[] = L"Windows.Storage.IKnownFoldersPlaylistsStatics";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Playlists )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Playlists(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersPlaylistsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersSavedPicturesStatics[] = L"Windows.Storage.IKnownFoldersSavedPicturesStatics";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SavedPictures )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SavedPictures(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersSavedPicturesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersStatics[] = L"Windows.Storage.IKnownFoldersStatics";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MusicLibrary )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PicturesLibrary )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosLibrary )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentsLibrary )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HomeGroup )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemovableDevices )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaServerDevices )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MusicLibrary(This,value) )
    ( (This)->lpVtbl->get_PicturesLibrary(This,value) )
    ( (This)->lpVtbl->get_VideosLibrary(This,value) )
    ( (This)->lpVtbl->get_DocumentsLibrary(This,value) )
    ( (This)->lpVtbl->get_HomeGroup(This,value) )
    ( (This)->lpVtbl->get_RemovableDevices(This,value) )
    ( (This)->lpVtbl->get_MediaServerDevices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersStatics2[] = L"Windows.Storage.IKnownFoldersStatics2";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Objects3D )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppCaptures )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordedCalls )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2Vtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Objects3D(This,value) )
    ( (This)->lpVtbl->get_AppCaptures(This,value) )
    ( (This)->lpVtbl->get_RecordedCalls(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IKnownFoldersStatics3[] = L"Windows.Storage.IKnownFoldersStatics3";
typedef struct __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFolderForUserAsync )(
        __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __x_ABI_CWindows_CStorage_CKnownFolderId folderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3Vtbl;
interface __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIKnownFoldersStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFolderForUserAsync(This,user,folderId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIKnownFoldersStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IPathIOStatics[] = L"Windows.Storage.IPathIOStatics";
typedef struct __x_ABI_CWindows_CStorage_CIPathIOStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReadTextAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteTextAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in HSTRING contents,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in HSTRING contents,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendTextAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in HSTRING contents,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendTextWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in HSTRING contents,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * textOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadLinesAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_HSTRING * * linesOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_HSTRING * * linesOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteLinesAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendLinesAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendLinesWithEncodingAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in_opt __FIIterable_1_HSTRING * lines,
                  __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBufferAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBufferAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBytesAsync )(
        __x_ABI_CWindows_CStorage_CIPathIOStatics * This,
                  __RPC__in HSTRING absolutePath,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIPathIOStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIPathIOStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIPathIOStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadTextAsync(This,absolutePath,textOperation) )
    ( (This)->lpVtbl->ReadTextWithEncodingAsync(This,absolutePath,encoding,textOperation) )
    ( (This)->lpVtbl->WriteTextAsync(This,absolutePath,contents,textOperation) )
    ( (This)->lpVtbl->WriteTextWithEncodingAsync(This,absolutePath,contents,encoding,textOperation) )
    ( (This)->lpVtbl->AppendTextAsync(This,absolutePath,contents,textOperation) )
    ( (This)->lpVtbl->AppendTextWithEncodingAsync(This,absolutePath,contents,encoding,textOperation) )
    ( (This)->lpVtbl->ReadLinesAsync(This,absolutePath,linesOperation) )
    ( (This)->lpVtbl->ReadLinesWithEncodingAsync(This,absolutePath,encoding,linesOperation) )
    ( (This)->lpVtbl->WriteLinesAsync(This,absolutePath,lines,operation) )
    ( (This)->lpVtbl->WriteLinesWithEncodingAsync(This,absolutePath,lines,encoding,operation) )
    ( (This)->lpVtbl->AppendLinesAsync(This,absolutePath,lines,operation) )
    ( (This)->lpVtbl->AppendLinesWithEncodingAsync(This,absolutePath,lines,encoding,operation) )
    ( (This)->lpVtbl->ReadBufferAsync(This,absolutePath,operation) )
    ( (This)->lpVtbl->WriteBufferAsync(This,absolutePath,buffer,operation) )
    ( (This)->lpVtbl->WriteBytesAsync(This,absolutePath,__bufferSize,buffer,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIPathIOStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISetVersionDeferral[] = L"Windows.Storage.ISetVersionDeferral";
typedef struct __x_ABI_CWindows_CStorage_CISetVersionDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CISetVersionDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISetVersionDeferralVtbl;
interface __x_ABI_CWindows_CStorage_CISetVersionDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISetVersionDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISetVersionDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISetVersionRequest[] = L"Windows.Storage.ISetVersionRequest";
typedef struct __x_ABI_CWindows_CStorage_CISetVersionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentVersion )(
        __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                           __RPC__out UINT32 * currentVersion
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredVersion )(
        __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                           __RPC__out UINT32 * desiredVersion
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CISetVersionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISetVersionDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISetVersionRequestVtbl;
interface __x_ABI_CWindows_CStorage_CISetVersionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISetVersionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentVersion(This,currentVersion) )
    ( (This)->lpVtbl->get_DesiredVersion(This,desiredVersion) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISetVersionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFile[] = L"Windows.Storage.IStorageFile";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FileType )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CopyOverloadDefaultNameAndOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CopyOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                  __RPC__in HSTRING desiredNewName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CopyOverload )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                  __RPC__in HSTRING desiredNewName,
                  __x_ABI_CWindows_CStorage_CNameCollisionOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CopyAndReplaceAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * fileToReplace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *MoveOverloadDefaultNameAndOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *MoveOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                  __RPC__in HSTRING desiredNewName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *MoveOverload )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * destinationFolder,
                  __RPC__in HSTRING desiredNewName,
                  __x_ABI_CWindows_CStorage_CNameCollisionOption option,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *MoveAndReplaceAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * fileToReplace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFileVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFile
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FileType(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->OpenAsync(This,accessMode,operation) )
    ( (This)->lpVtbl->OpenTransactedWriteAsync(This,operation) )
    ( (This)->lpVtbl->CopyOverloadDefaultNameAndOptions(This,destinationFolder,operation) )
    ( (This)->lpVtbl->CopyOverloadDefaultOptions(This,destinationFolder,desiredNewName,operation) )
    ( (This)->lpVtbl->CopyOverload(This,destinationFolder,desiredNewName,option,operation) )
    ( (This)->lpVtbl->CopyAndReplaceAsync(This,fileToReplace,operation) )
    ( (This)->lpVtbl->MoveOverloadDefaultNameAndOptions(This,destinationFolder,operation) )
    ( (This)->lpVtbl->MoveOverloadDefaultOptions(This,destinationFolder,desiredNewName,operation) )
    ( (This)->lpVtbl->MoveOverload(This,destinationFolder,desiredNewName,option,operation) )
    ( (This)->lpVtbl->MoveAndReplaceAsync(This,fileToReplace,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFile2[] = L"Windows.Storage.IStorageFile2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *OpenWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
                  __x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
                  __x_ABI_CWindows_CStorage_CStorageOpenOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFile2 * This,
                  __x_ABI_CWindows_CStorage_CStorageOpenOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFile2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFile2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenWithOptionsAsync(This,accessMode,options,operation) )
    ( (This)->lpVtbl->OpenTransactedWriteWithOptionsAsync(This,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFilePropertiesWithAvailability[] = L"Windows.Storage.IStorageFilePropertiesWithAvailability";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )(
        __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailabilityVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailabilityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAvailable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFileStatics[] = L"Windows.Storage.IStorageFileStatics";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFileFromPathAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFileFromApplicationUriAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStreamedFileAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in HSTRING displayNameWithExtension,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * dataRequested,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * thumbnail,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceWithStreamedFileAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * fileToReplace,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestedHandler * dataRequested,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * thumbnail,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStreamedFileFromUriAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in HSTRING displayNameWithExtension,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * thumbnail,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceWithStreamedFileFromUriAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFileStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * fileToReplace,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * thumbnail,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFileStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFileStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFileFromPathAsync(This,path,operation) )
    ( (This)->lpVtbl->GetFileFromApplicationUriAsync(This,uri,operation) )
    ( (This)->lpVtbl->CreateStreamedFileAsync(This,displayNameWithExtension,dataRequested,thumbnail,operation) )
    ( (This)->lpVtbl->ReplaceWithStreamedFileAsync(This,fileToReplace,dataRequested,thumbnail,operation) )
    ( (This)->lpVtbl->CreateStreamedFileFromUriAsync(This,displayNameWithExtension,uri,thumbnail,operation) )
    ( (This)->lpVtbl->ReplaceWithStreamedFileFromUriAsync(This,fileToReplace,uri,thumbnail,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFileStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFolder[] = L"Windows.Storage.IStorageFolder";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFileAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFileAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFolderAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncOverloadDefaultOptionsStartAndCount )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncOverloadDefaultOptionsStartAndCount )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemsAsyncOverloadDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CIStorageFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFolderVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFolder
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFolderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFileAsyncOverloadDefaultOptions(This,desiredName,operation) )
    ( (This)->lpVtbl->CreateFileAsync(This,desiredName,options,operation) )
    ( (This)->lpVtbl->CreateFolderAsyncOverloadDefaultOptions(This,desiredName,operation) )
    ( (This)->lpVtbl->CreateFolderAsync(This,desiredName,options,operation) )
    ( (This)->lpVtbl->GetFileAsync(This,name,operation) )
    ( (This)->lpVtbl->GetFolderAsync(This,name,operation) )
    ( (This)->lpVtbl->GetItemAsync(This,name,operation) )
    ( (This)->lpVtbl->GetFilesAsyncOverloadDefaultOptionsStartAndCount(This,operation) )
    ( (This)->lpVtbl->GetFoldersAsyncOverloadDefaultOptionsStartAndCount(This,operation) )
    ( (This)->lpVtbl->GetItemsAsyncOverloadDefaultStartAndCount(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFolder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFolder2[] = L"Windows.Storage.IStorageFolder2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFolder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetItemAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolder2 * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFolder2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFolder2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFolder2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetItemAsync(This,name,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFolder2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFolder3[] = L"Windows.Storage.IStorageFolder3";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFolder3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetChangeTracker )(
        __x_ABI_CWindows_CStorage_CIStorageFolder3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFolder3Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFolder3
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFolder3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetChangeTracker(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFolder3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageFolderStatics[] = L"Windows.Storage.IStorageFolderStatics";
typedef struct __x_ABI_CWindows_CStorage_CIStorageFolderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFolderFromPathAsync )(
        __x_ABI_CWindows_CStorage_CIStorageFolderStatics * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageFolderStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageFolderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageFolderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFolderFromPathAsync(This,path,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageFolderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageItem[] = L"Windows.Storage.IStorageItem";
typedef struct __x_ABI_CWindows_CStorage_CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RenameAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RenameAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                  __RPC__in HSTRING desiredName,
                  __x_ABI_CWindows_CStorage_CNameCollisionOption option,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *DeleteAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                  __x_ABI_CWindows_CStorage_CStorageDeleteOption option,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetBasicPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CBasicProperties * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CFileAttributes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateCreated )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsOfType )(
        __x_ABI_CWindows_CStorage_CIStorageItem * This,
                  __x_ABI_CWindows_CStorage_CStorageItemTypes type,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageItemVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageItem
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RenameAsyncOverloadDefaultOptions(This,desiredName,operation) )
    ( (This)->lpVtbl->RenameAsync(This,desiredName,option,operation) )
    ( (This)->lpVtbl->DeleteAsyncOverloadDefaultOptions(This,operation) )
    ( (This)->lpVtbl->DeleteAsync(This,option,operation) )
    ( (This)->lpVtbl->GetBasicPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_Attributes(This,value) )
    ( (This)->lpVtbl->get_DateCreated(This,value) )
    ( (This)->lpVtbl->IsOfType(This,type,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageItem2[] = L"Windows.Storage.IStorageItem2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetParentAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CStorage_CIStorageItem2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * item,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageItem2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageItem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetParentAsync(This,operation) )
    ( (This)->lpVtbl->IsEqual(This,item,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageItem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageItemProperties[] = L"Windows.Storage.IStorageItemProperties";
typedef struct __x_ABI_CWindows_CStorage_CIStorageItemPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsyncOverloadDefaultSizeDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedSize,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayType )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FolderRelativeId )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIStorageItemContentProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageItemPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageItemProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageItemPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(This,mode,operation) )
    ( (This)->lpVtbl->GetThumbnailAsyncOverloadDefaultOptions(This,mode,requestedSize,operation) )
    ( (This)->lpVtbl->GetThumbnailAsync(This,mode,requestedSize,options,operation) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayType(This,value) )
    ( (This)->lpVtbl->get_FolderRelativeId(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageItemProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageItemProperties2[] = L"Windows.Storage.IStorageItemProperties2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageItemProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetScaledImageAsThumbnailAsyncOverloadDefaultOptions )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetScaledImageAsThumbnailAsync )(
        __x_ABI_CWindows_CStorage_CIStorageItemProperties2 * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedSize,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CFileProperties__CStorageItemThumbnail * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageItemProperties2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageItemProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageItemProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(This,mode,operation) )
    ( (This)->lpVtbl->GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(This,mode,requestedSize,operation) )
    ( (This)->lpVtbl->GetScaledImageAsThumbnailAsync(This,mode,requestedSize,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageItemProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageItemPropertiesWithProvider[] = L"Windows.Storage.IStorageItemPropertiesWithProvider";
typedef struct __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Provider )(
        __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProviderVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Provider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibrary[] = L"Windows.Storage.IStorageLibrary";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAddFolderAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRemoveFolderAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Folders )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                           __RPC__deref_out_opt __FIObservableVector_1_Windows__CStorage__CStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaveFolder )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DefinitionChanged )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CStorageLibrary_IInspectable * handler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DefinitionChanged )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibrary
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAddFolderAsync(This,operation) )
    ( (This)->lpVtbl->RequestRemoveFolderAsync(This,folder,operation) )
    ( (This)->lpVtbl->get_Folders(This,value) )
    ( (This)->lpVtbl->get_SaveFolder(This,value) )
    ( (This)->lpVtbl->add_DefinitionChanged(This,handler,eventCookie) )
    ( (This)->lpVtbl->remove_DefinitionChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibrary;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibrary2[] = L"Windows.Storage.IStorageLibrary2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibrary2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibrary2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibrary2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibrary2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibrary2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibrary3[] = L"Windows.Storage.IStorageLibrary3";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibrary3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AreFolderSuggestionsAvailableAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibrary3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibrary3Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibrary3
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibrary3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AreFolderSuggestionsAvailableAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibrary3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibraryChange[] = L"Windows.Storage.IStorageLibraryChange";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CStorageLibraryChangeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviousPath )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsOfType )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                  __x_ABI_CWindows_CStorage_CStorageItemTypes type,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStorageItemAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChange * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryChangeVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibraryChange
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_PreviousPath(This,value) )
    ( (This)->lpVtbl->IsOfType(This,type,value) )
    ( (This)->lpVtbl->GetStorageItemAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibraryChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibraryChangeReader[] = L"Windows.Storage.IStorageLibraryChangeReader";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageLibraryChange * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReaderVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,operation) )
    ( (This)->lpVtbl->AcceptChangesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibraryChangeTracker[] = L"Windows.Storage.IStorageLibraryChangeTracker";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageLibraryChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTrackerVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChangeReader(This,value) )
    ( (This)->lpVtbl->Enable(This) )
    ( (This)->lpVtbl->Reset(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibraryStatics[] = L"Windows.Storage.IStorageLibraryStatics";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLibraryAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryStatics * This,
                  __x_ABI_CWindows_CStorage_CKnownLibraryId libraryId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibraryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetLibraryAsync(This,libraryId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibraryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageLibraryStatics2[] = L"Windows.Storage.IStorageLibraryStatics2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLibraryForUserAsync )(
        __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __x_ABI_CWindows_CStorage_CKnownLibraryId libraryId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageLibrary * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageLibraryStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetLibraryForUserAsync(This,user,libraryId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageLibraryStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageProvider[] = L"Windows.Storage.IStorageProvider";
typedef struct __x_ABI_CWindows_CStorage_CIStorageProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CIStorageProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CStorage_CIStorageProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageProviderVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageProvider2[] = L"Windows.Storage.IStorageProvider2";
typedef struct __x_ABI_CWindows_CStorage_CIStorageProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsPropertySupportedForPartialFileAsync )(
        __x_ABI_CWindows_CStorage_CIStorageProvider2 * This,
                  __RPC__in HSTRING propertyCanonicalName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageProvider2Vtbl;
interface __x_ABI_CWindows_CStorage_CIStorageProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsPropertySupportedForPartialFileAsync(This,propertyCanonicalName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStorageStreamTransaction[] = L"Windows.Storage.IStorageStreamTransaction";
typedef struct __x_ABI_CWindows_CStorage_CIStorageStreamTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStorageStreamTransactionVtbl;
interface __x_ABI_CWindows_CStorage_CIStorageStreamTransaction
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStorageStreamTransactionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Stream(This,value) )
    ( (This)->lpVtbl->CommitAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStorageStreamTransaction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IStreamedFileDataRequest[] = L"Windows.Storage.IStreamedFileDataRequest";
typedef struct __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FailAndClose )(
        __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest * This,
                  __x_ABI_CWindows_CStorage_CStreamedFileFailureMode failureMode
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestVtbl;
interface __x_ABI_CWindows_CStorage_CIStreamedFileDataRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIStreamedFileDataRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FailAndClose(This,failureMode) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIStreamedFileDataRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemAudioProperties[] = L"Windows.Storage.ISystemAudioProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemAudioPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemAudioProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncodingBitrate )(
        __x_ABI_CWindows_CStorage_CISystemAudioProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemAudioPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemAudioProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemAudioPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncodingBitrate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemAudioProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemDataPaths[] = L"Windows.Storage.ISystemDataPaths";
typedef struct __x_ABI_CWindows_CStorage_CISystemDataPathsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Fonts )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgramData )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Public )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicDesktop )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicDocuments )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicDownloads )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicMusic )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicPictures )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicVideos )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_System )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemHost )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemX86 )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemX64 )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemArm )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserProfiles )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Windows )(
        __x_ABI_CWindows_CStorage_CISystemDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemDataPathsVtbl;
interface __x_ABI_CWindows_CStorage_CISystemDataPaths
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemDataPathsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Fonts(This,value) )
    ( (This)->lpVtbl->get_ProgramData(This,value) )
    ( (This)->lpVtbl->get_Public(This,value) )
    ( (This)->lpVtbl->get_PublicDesktop(This,value) )
    ( (This)->lpVtbl->get_PublicDocuments(This,value) )
    ( (This)->lpVtbl->get_PublicDownloads(This,value) )
    ( (This)->lpVtbl->get_PublicMusic(This,value) )
    ( (This)->lpVtbl->get_PublicPictures(This,value) )
    ( (This)->lpVtbl->get_PublicVideos(This,value) )
    ( (This)->lpVtbl->get_System(This,value) )
    ( (This)->lpVtbl->get_SystemHost(This,value) )
    ( (This)->lpVtbl->get_SystemX86(This,value) )
    ( (This)->lpVtbl->get_SystemX64(This,value) )
    ( (This)->lpVtbl->get_SystemArm(This,value) )
    ( (This)->lpVtbl->get_UserProfiles(This,value) )
    ( (This)->lpVtbl->get_Windows(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemDataPaths;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemDataPathsStatics[] = L"Windows.Storage.ISystemDataPathsStatics";
typedef struct __x_ABI_CWindows_CStorage_CISystemDataPathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CStorage_CISystemDataPathsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemDataPaths * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemDataPathsStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CISystemDataPathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemDataPathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemDataPathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemGPSProperties[] = L"Windows.Storage.ISystemGPSProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemGPSPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LatitudeDecimal )(
        __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LongitudeDecimal )(
        __x_ABI_CWindows_CStorage_CISystemGPSProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemGPSPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemGPSProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemGPSPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LatitudeDecimal(This,value) )
    ( (This)->lpVtbl->get_LongitudeDecimal(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemGPSProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemImageProperties[] = L"Windows.Storage.ISystemImageProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemImagePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalSize )(
        __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalSize )(
        __x_ABI_CWindows_CStorage_CISystemImageProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemImagePropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemImageProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemImagePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalSize(This,value) )
    ( (This)->lpVtbl->get_VerticalSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemImageProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemMediaProperties[] = L"Windows.Storage.ISystemMediaProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemMediaPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Producer )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubTitle )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Writer )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Year )(
        __x_ABI_CWindows_CStorage_CISystemMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemMediaPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemMediaProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemMediaPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Producer(This,value) )
    ( (This)->lpVtbl->get_Publisher(This,value) )
    ( (This)->lpVtbl->get_SubTitle(This,value) )
    ( (This)->lpVtbl->get_Writer(This,value) )
    ( (This)->lpVtbl->get_Year(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemMediaProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemMusicProperties[] = L"Windows.Storage.ISystemMusicProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemMusicPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlbumArtist )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumTitle )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Artist )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Composer )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Conductor )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayArtist )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Genre )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
        __x_ABI_CWindows_CStorage_CISystemMusicProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemMusicPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemMusicProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemMusicPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlbumArtist(This,value) )
    ( (This)->lpVtbl->get_AlbumTitle(This,value) )
    ( (This)->lpVtbl->get_Artist(This,value) )
    ( (This)->lpVtbl->get_Composer(This,value) )
    ( (This)->lpVtbl->get_Conductor(This,value) )
    ( (This)->lpVtbl->get_DisplayArtist(This,value) )
    ( (This)->lpVtbl->get_Genre(This,value) )
    ( (This)->lpVtbl->get_TrackNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemMusicProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemPhotoProperties[] = L"Windows.Storage.ISystemPhotoProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemPhotoPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CameraManufacturer )(
        __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraModel )(
        __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTaken )(
        __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeopleNames )(
        __x_ABI_CWindows_CStorage_CISystemPhotoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemPhotoPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemPhotoProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemPhotoPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CameraManufacturer(This,value) )
    ( (This)->lpVtbl->get_CameraModel(This,value) )
    ( (This)->lpVtbl->get_DateTaken(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_PeopleNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemPhotoProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemProperties[] = L"Windows.Storage.ISystemProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemNameDisplay )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rating )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Audio )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemAudioProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GPS )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemGPSProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Media )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemMediaProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Music )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemMusicProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Photo )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemPhotoProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Video )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemVideoProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CStorage_CISystemProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CISystemImageProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Author(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->get_ItemNameDisplay(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_Rating(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Audio(This,value) )
    ( (This)->lpVtbl->get_GPS(This,value) )
    ( (This)->lpVtbl->get_Media(This,value) )
    ( (This)->lpVtbl->get_Music(This,value) )
    ( (This)->lpVtbl->get_Photo(This,value) )
    ( (This)->lpVtbl->get_Video(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_ISystemVideoProperties[] = L"Windows.Storage.ISystemVideoProperties";
typedef struct __x_ABI_CWindows_CStorage_CISystemVideoPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Director )(
        __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameHeight )(
        __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameWidth )(
        __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalBitrate )(
        __x_ABI_CWindows_CStorage_CISystemVideoProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CISystemVideoPropertiesVtbl;
interface __x_ABI_CWindows_CStorage_CISystemVideoProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CISystemVideoPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Director(This,value) )
    ( (This)->lpVtbl->get_FrameHeight(This,value) )
    ( (This)->lpVtbl->get_FrameWidth(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_TotalBitrate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CISystemVideoProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IUserDataPaths[] = L"Windows.Storage.IUserDataPaths";
typedef struct __x_ABI_CWindows_CStorage_CIUserDataPathsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CameraRoll )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cookies )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Desktop )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Documents )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Downloads )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Favorites )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_History )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InternetCache )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAppData )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAppDataLow )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Music )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pictures )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Profile )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recent )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingAppData )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SavedPictures )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Screenshots )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Templates )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Videos )(
        __x_ABI_CWindows_CStorage_CIUserDataPaths * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIUserDataPathsVtbl;
interface __x_ABI_CWindows_CStorage_CIUserDataPaths
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIUserDataPathsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CameraRoll(This,value) )
    ( (This)->lpVtbl->get_Cookies(This,value) )
    ( (This)->lpVtbl->get_Desktop(This,value) )
    ( (This)->lpVtbl->get_Documents(This,value) )
    ( (This)->lpVtbl->get_Downloads(This,value) )
    ( (This)->lpVtbl->get_Favorites(This,value) )
    ( (This)->lpVtbl->get_History(This,value) )
    ( (This)->lpVtbl->get_InternetCache(This,value) )
    ( (This)->lpVtbl->get_LocalAppData(This,value) )
    ( (This)->lpVtbl->get_LocalAppDataLow(This,value) )
    ( (This)->lpVtbl->get_Music(This,value) )
    ( (This)->lpVtbl->get_Pictures(This,value) )
    ( (This)->lpVtbl->get_Profile(This,value) )
    ( (This)->lpVtbl->get_Recent(This,value) )
    ( (This)->lpVtbl->get_RoamingAppData(This,value) )
    ( (This)->lpVtbl->get_SavedPictures(This,value) )
    ( (This)->lpVtbl->get_Screenshots(This,value) )
    ( (This)->lpVtbl->get_Templates(This,value) )
    ( (This)->lpVtbl->get_Videos(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIUserDataPaths;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_IUserDataPathsStatics[] = L"Windows.Storage.IUserDataPathsStatics";
typedef struct __x_ABI_CWindows_CStorage_CIUserDataPathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIUserDataPaths * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CStorage_CIUserDataPathsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIUserDataPaths * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CIUserDataPathsStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CIUserDataPathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CIUserDataPathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CIUserDataPathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AppDataPaths[] = L"Windows.Storage.AppDataPaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_ApplicationData[] = L"Windows.Storage.ApplicationData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_ApplicationDataCompositeValue[] = L"Windows.Storage.ApplicationDataCompositeValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_ApplicationDataContainer[] = L"Windows.Storage.ApplicationDataContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_ApplicationDataContainerSettings[] = L"Windows.Storage.ApplicationDataContainerSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_CachedFileManager[] = L"Windows.Storage.CachedFileManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_DownloadsFolder[] = L"Windows.Storage.DownloadsFolder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_FileIO[] = L"Windows.Storage.FileIO";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_KnownFolders[] = L"Windows.Storage.KnownFolders";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_PathIO[] = L"Windows.Storage.PathIO";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SetVersionDeferral[] = L"Windows.Storage.SetVersionDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SetVersionRequest[] = L"Windows.Storage.SetVersionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageFile[] = L"Windows.Storage.StorageFile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageFolder[] = L"Windows.Storage.StorageFolder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageLibrary[] = L"Windows.Storage.StorageLibrary";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageLibraryChange[] = L"Windows.Storage.StorageLibraryChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageLibraryChangeReader[] = L"Windows.Storage.StorageLibraryChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageLibraryChangeTracker[] = L"Windows.Storage.StorageLibraryChangeTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageProvider[] = L"Windows.Storage.StorageProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StorageStreamTransaction[] = L"Windows.Storage.StorageStreamTransaction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_StreamedFileDataRequest[] = L"Windows.Storage.StreamedFileDataRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemAudioProperties[] = L"Windows.Storage.SystemAudioProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemDataPaths[] = L"Windows.Storage.SystemDataPaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemGPSProperties[] = L"Windows.Storage.SystemGPSProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemImageProperties[] = L"Windows.Storage.SystemImageProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemMediaProperties[] = L"Windows.Storage.SystemMediaProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemMusicProperties[] = L"Windows.Storage.SystemMusicProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemPhotoProperties[] = L"Windows.Storage.SystemPhotoProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemProperties[] = L"Windows.Storage.SystemProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_SystemVideoProperties[] = L"Windows.Storage.SystemVideoProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_UserDataPaths[] = L"Windows.Storage.UserDataPaths";
       
       
#pragma clang diagnostic pop
