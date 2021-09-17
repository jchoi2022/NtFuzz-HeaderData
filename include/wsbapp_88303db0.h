#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWsbApplicationBackupSupport IWsbApplicationBackupSupport;
typedef interface IWsbApplicationRestoreSupport IWsbApplicationRestoreSupport;
typedef interface IWsbApplicationAsync IWsbApplicationAsync;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWsbApplicationBackupSupport;
    typedef struct IWsbApplicationBackupSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWsbApplicationBackupSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWsbApplicationBackupSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWsbApplicationBackupSupport * This);
        HRESULT ( STDMETHODCALLTYPE *CheckConsistency )(
            __RPC__in IWsbApplicationBackupSupport * This,
                                       __RPC__in_opt_string LPWSTR wszWriterMetadata,
                                       __RPC__in_opt_string LPWSTR wszComponentName,
                                       __RPC__in_opt_string LPWSTR wszComponentLogicalPath,
                              __RPC__in_range(0,1000) DWORD cVolumes,
                                                __RPC__in_ecount_full_opt(cVolumes) LPWSTR *rgwszSourceVolumePath,
                                                __RPC__in_ecount_full_opt(cVolumes) LPWSTR *rgwszSnapshotVolumePath,
                        __RPC__deref_out_opt IWsbApplicationAsync **ppAsync);
        END_INTERFACE
    } IWsbApplicationBackupSupportVtbl;
    interface IWsbApplicationBackupSupport
    {
        CONST_VTBL struct IWsbApplicationBackupSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CheckConsistency(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,cVolumes,rgwszSourceVolumePath,rgwszSnapshotVolumePath,ppAsync) )
EXTERN_C const IID IID_IWsbApplicationRestoreSupport;
    typedef struct IWsbApplicationRestoreSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWsbApplicationRestoreSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWsbApplicationRestoreSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWsbApplicationRestoreSupport * This);
        HRESULT ( STDMETHODCALLTYPE *PreRestore )(
            __RPC__in IWsbApplicationRestoreSupport * This,
                                       __RPC__in_opt_string LPWSTR wszWriterMetadata,
                                       __RPC__in_opt_string LPWSTR wszComponentName,
                                       __RPC__in_opt_string LPWSTR wszComponentLogicalPath,
                       BOOLEAN bNoRollForward);
        HRESULT ( STDMETHODCALLTYPE *PostRestore )(
            __RPC__in IWsbApplicationRestoreSupport * This,
                                       __RPC__in_opt_string LPWSTR wszWriterMetadata,
                                       __RPC__in_opt_string LPWSTR wszComponentName,
                                       __RPC__in_opt_string LPWSTR wszComponentLogicalPath,
                       BOOLEAN bNoRollForward);
        HRESULT ( STDMETHODCALLTYPE *OrderComponents )(
            __RPC__in IWsbApplicationRestoreSupport * This,
                              __RPC__in_range(0,10000) DWORD cComponents,
                                        __RPC__in_ecount_full(cComponents) LPWSTR *rgComponentName,
                                        __RPC__in_ecount_full(cComponents) LPWSTR *rgComponentLogicalPaths,
                                                  __RPC__deref_out_ecount_full_opt_string(cComponents) LPWSTR **prgComponentName,
                                                  __RPC__deref_out_ecount_full_opt_string(cComponents) LPWSTR **prgComponentLogicalPath);
        HRESULT ( STDMETHODCALLTYPE *IsRollForwardSupported )(
            __RPC__in IWsbApplicationRestoreSupport * This,
                        __RPC__out BOOLEAN *pbRollForwardSupported);
        END_INTERFACE
    } IWsbApplicationRestoreSupportVtbl;
    interface IWsbApplicationRestoreSupport
    {
        CONST_VTBL struct IWsbApplicationRestoreSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PreRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) )
    ( (This)->lpVtbl -> PostRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) )
    ( (This)->lpVtbl -> OrderComponents(This,cComponents,rgComponentName,rgComponentLogicalPaths,prgComponentName,prgComponentLogicalPath) )
    ( (This)->lpVtbl -> IsRollForwardSupported(This,pbRollForwardSupported) )
EXTERN_C const IID IID_IWsbApplicationAsync;
    typedef struct IWsbApplicationAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWsbApplicationAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWsbApplicationAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWsbApplicationAsync * This);
        HRESULT ( STDMETHODCALLTYPE *QueryStatus )(
            __RPC__in IWsbApplicationAsync * This,
                        __RPC__out HRESULT *phrResult);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IWsbApplicationAsync * This);
        END_INTERFACE
    } IWsbApplicationAsyncVtbl;
    interface IWsbApplicationAsync
    {
        CONST_VTBL struct IWsbApplicationAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryStatus(This,phrResult) )
    ( (This)->lpVtbl -> Abort(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0003_v0_0_s_ifspec;
}
