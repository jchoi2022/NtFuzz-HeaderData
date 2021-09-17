#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRandomAccessStreamFileAccessMode IRandomAccessStreamFileAccessMode;
typedef interface IUnbufferedFileHandleOplockCallback IUnbufferedFileHandleOplockCallback;
typedef interface IUnbufferedFileHandleProvider IUnbufferedFileHandleProvider;
typedef interface IOplockBreakingHandler IOplockBreakingHandler;
typedef interface IStorageItemHandleAccess IStorageItemHandleAccess;
typedef interface IStorageFolderHandleAccess IStorageFolderHandleAccess;
typedef interface IDDEInitializer IDDEInitializer;
#include "oaidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRandomAccessStreamFileAccessMode;
    typedef struct IRandomAccessStreamFileAccessModeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRandomAccessStreamFileAccessMode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRandomAccessStreamFileAccessMode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRandomAccessStreamFileAccessMode * This);
        HRESULT ( STDMETHODCALLTYPE *GetMode )(
            __RPC__in IRandomAccessStreamFileAccessMode * This,
                        __RPC__out DWORD *fileAccessMode);
        END_INTERFACE
    } IRandomAccessStreamFileAccessModeVtbl;
    interface IRandomAccessStreamFileAccessMode
    {
        CONST_VTBL struct IRandomAccessStreamFileAccessModeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMode(This,fileAccessMode) )
EXTERN_C const IID IID_IUnbufferedFileHandleOplockCallback;
    typedef struct IUnbufferedFileHandleOplockCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUnbufferedFileHandleOplockCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUnbufferedFileHandleOplockCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUnbufferedFileHandleOplockCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnBrokenCallback )(
            IUnbufferedFileHandleOplockCallback * This);
        END_INTERFACE
    } IUnbufferedFileHandleOplockCallbackVtbl;
    interface IUnbufferedFileHandleOplockCallback
    {
        CONST_VTBL struct IUnbufferedFileHandleOplockCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBrokenCallback(This) )
EXTERN_C const IID IID_IUnbufferedFileHandleProvider;
    typedef struct IUnbufferedFileHandleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUnbufferedFileHandleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUnbufferedFileHandleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUnbufferedFileHandleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *OpenUnbufferedFileHandle )(
            __RPC__in IUnbufferedFileHandleProvider * This,
                       __RPC__in_opt IUnbufferedFileHandleOplockCallback *oplockBreakCallback,
                                __RPC__out DWORD_PTR *fileHandle);
        HRESULT ( STDMETHODCALLTYPE *CloseUnbufferedFileHandle )(
            __RPC__in IUnbufferedFileHandleProvider * This);
        END_INTERFACE
    } IUnbufferedFileHandleProviderVtbl;
    interface IUnbufferedFileHandleProvider
    {
        CONST_VTBL struct IUnbufferedFileHandleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenUnbufferedFileHandle(This,oplockBreakCallback,fileHandle) )
    ( (This)->lpVtbl -> CloseUnbufferedFileHandle(This) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum HANDLE_OPTIONS
    {
        HO_NONE = 0,
        HO_OPEN_REQUIRING_OPLOCK = 0x40000,
        HO_DELETE_ON_CLOSE = 0x4000000,
        HO_SEQUENTIAL_SCAN = 0x8000000,
        HO_RANDOM_ACCESS = 0x10000000,
        HO_NO_BUFFERING = 0x20000000,
        HO_OVERLAPPED = 0x40000000,
        HO_WRITE_THROUGH = 0x80000000
    } HANDLE_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(HANDLE_OPTIONS);
typedef
enum HANDLE_ACCESS_OPTIONS
    {
        HAO_NONE = 0,
        HAO_READ_ATTRIBUTES = 0x80,
        HAO_READ = 0x120089,
        HAO_WRITE = 0x120116,
        HAO_DELETE = 0x10000
    } HANDLE_ACCESS_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(HANDLE_ACCESS_OPTIONS);
typedef
enum HANDLE_SHARING_OPTIONS
    {
        HSO_SHARE_NONE = 0,
        HSO_SHARE_READ = 0x1,
        HSO_SHARE_WRITE = 0x2,
        HSO_SHARE_DELETE = 0x4
    } HANDLE_SHARING_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(HANDLE_SHARING_OPTIONS);
typedef
enum HANDLE_CREATION_OPTIONS
    {
        HCO_CREATE_NEW = 0x1,
        HCO_CREATE_ALWAYS = 0x2,
        HCO_OPEN_EXISTING = 0x3,
        HCO_OPEN_ALWAYS = 0x4,
        HCO_TRUNCATE_EXISTING = 0x5
    } HANDLE_CREATION_OPTIONS;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IOplockBreakingHandler;
    typedef struct IOplockBreakingHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOplockBreakingHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOplockBreakingHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOplockBreakingHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OplockBreaking )(
            __RPC__in IOplockBreakingHandler * This);
        END_INTERFACE
    } IOplockBreakingHandlerVtbl;
    interface IOplockBreakingHandler
    {
        CONST_VTBL struct IOplockBreakingHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OplockBreaking(This) )
EXTERN_C const IID IID_IStorageItemHandleAccess;
    typedef struct IStorageItemHandleAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorageItemHandleAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorageItemHandleAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorageItemHandleAccess * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IStorageItemHandleAccess * This,
                       HANDLE_ACCESS_OPTIONS accessOptions,
                       HANDLE_SHARING_OPTIONS sharingOptions,
                       HANDLE_OPTIONS options,
                                 __RPC__in_opt IOplockBreakingHandler *oplockBreakingHandler,
                                               __RPC__deref_out_opt HANDLE *interopHandle);
        END_INTERFACE
    } IStorageItemHandleAccessVtbl;
    interface IStorageItemHandleAccess
    {
        CONST_VTBL struct IStorageItemHandleAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,accessOptions,sharingOptions,options,oplockBreakingHandler,interopHandle) )
EXTERN_C const IID IID_IStorageFolderHandleAccess;
    typedef struct IStorageFolderHandleAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorageFolderHandleAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorageFolderHandleAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorageFolderHandleAccess * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IStorageFolderHandleAccess * This,
                               __RPC__in_string LPCWSTR fileName,
                       HANDLE_CREATION_OPTIONS creationOptions,
                       HANDLE_ACCESS_OPTIONS accessOptions,
                       HANDLE_SHARING_OPTIONS sharingOptions,
                       HANDLE_OPTIONS options,
                                 __RPC__in_opt IOplockBreakingHandler *oplockBreakingHandler,
                                               __RPC__deref_out_opt HANDLE *interopHandle);
        END_INTERFACE
    } IStorageFolderHandleAccessVtbl;
    interface IStorageFolderHandleAccess
    {
        CONST_VTBL struct IStorageFolderHandleAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,fileName,creationOptions,accessOptions,sharingOptions,options,oplockBreakingHandler,interopHandle) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum CreateProcessMethod
    {
        CpCreateProcess = 0,
        CpCreateProcessAsUser = 1,
        CpAicLaunchAdminProcess = 2
    } CreateProcessMethod;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IDDEInitializer;
    typedef struct IDDEInitializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDDEInitializer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDDEInitializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDDEInitializer * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IDDEInitializer * This,
                               __RPC__in_string LPCWSTR fileExtensionOrProtocol,
                       CreateProcessMethod method,
                               __RPC__in_string LPCWSTR currentDirectory,
                       __RPC__in_opt IShellItem *execTarget,
                       __RPC__in_opt IUnknown *site,
                               __RPC__in_string LPCWSTR application,
                               __RPC__in_string LPCWSTR targetFile,
                               __RPC__in_string LPCWSTR arguments,
                               __RPC__in_string LPCWSTR verb);
        END_INTERFACE
    } IDDEInitializerVtbl;
    interface IDDEInitializer
    {
        CONST_VTBL struct IDDEInitializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,fileExtensionOrProtocol,method,currentDirectory,execTarget,site,application,targetFile,arguments,verb) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0007_v0_0_s_ifspec;
}
