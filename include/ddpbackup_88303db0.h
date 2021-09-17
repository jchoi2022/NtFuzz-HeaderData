#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDedupReadFileCallback IDedupReadFileCallback;
typedef interface IDedupBackupSupport IDedupBackupSupport;
typedef class DedupBackupSupport DedupBackupSupport;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _DEDUP_CONTAINER_EXTENT
    {
    ULONG ContainerIndex;
    hyper StartOffset;
    hyper Length;
    } DEDUP_CONTAINER_EXTENT;
typedef struct _DDP_FILE_EXTENT
    {
    hyper Length;
    hyper Offset;
    } DDP_FILE_EXTENT;
typedef
enum _DEDUP_BACKUP_SUPPORT_PARAM_TYPE
    {
        DEDUP_RECONSTRUCT_UNOPTIMIZED = 1,
        DEDUP_RECONSTRUCT_OPTIMIZED = 2
    } DEDUP_BACKUP_SUPPORT_PARAM_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_ddpbackup_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpbackup_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDedupReadFileCallback;
    typedef struct IDedupReadFileCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupReadFileCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupReadFileCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupReadFileCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ReadBackupFile )(
            __RPC__in IDedupReadFileCallback * This,
                       __RPC__in BSTR FileFullPath,
                       hyper FileOffset,
                       ULONG SizeToRead,
                                            __RPC__out_ecount_part(SizeToRead, *ReturnedSize) BYTE *FileBuffer,
                        __RPC__out ULONG *ReturnedSize,
                       DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *OrderContainersRestore )(
            __RPC__in IDedupReadFileCallback * This,
                       ULONG NumberOfContainers,
                                __RPC__in_ecount_full(NumberOfContainers) BSTR *ContainerPaths,
                        __RPC__out ULONG *ReadPlanEntries,
                                          __RPC__deref_out_ecount_full_opt(*ReadPlanEntries) DEDUP_CONTAINER_EXTENT **ReadPlan);
        HRESULT ( STDMETHODCALLTYPE *PreviewContainerRead )(
            __RPC__in IDedupReadFileCallback * This,
                       __RPC__in BSTR FileFullPath,
                       ULONG NumberOfReads,
                                __RPC__in_ecount_full(NumberOfReads) DDP_FILE_EXTENT *ReadOffsets);
        END_INTERFACE
    } IDedupReadFileCallbackVtbl;
    interface IDedupReadFileCallback
    {
        CONST_VTBL struct IDedupReadFileCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadBackupFile(This,FileFullPath,FileOffset,SizeToRead,FileBuffer,ReturnedSize,Flags) )
    ( (This)->lpVtbl -> OrderContainersRestore(This,NumberOfContainers,ContainerPaths,ReadPlanEntries,ReadPlan) )
    ( (This)->lpVtbl -> PreviewContainerRead(This,FileFullPath,NumberOfReads,ReadOffsets) )
EXTERN_C const IID IID_IDedupBackupSupport;
    typedef struct IDedupBackupSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupBackupSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupBackupSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupBackupSupport * This);
        HRESULT ( STDMETHODCALLTYPE *RestoreFiles )(
            __RPC__in IDedupBackupSupport * This,
                       ULONG NumberOfFiles,
                                __RPC__in_ecount_full(NumberOfFiles) BSTR *FileFullPaths,
                       __RPC__in_opt IDedupReadFileCallback *Store,
                       DWORD Flags,
                                 __RPC__out_ecount_full(NumberOfFiles) HRESULT *FileResults);
        END_INTERFACE
    } IDedupBackupSupportVtbl;
    interface IDedupBackupSupport
    {
        CONST_VTBL struct IDedupBackupSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RestoreFiles(This,NumberOfFiles,FileFullPaths,Store,Flags,FileResults) )
EXTERN_C const IID LIBID_DedupBackup;
EXTERN_C const CLSID CLSID_DedupBackupSupport;
class DECLSPEC_UUID("73D6B2AD-2984-4715-B2E3-924C149744DD")
DedupBackupSupport;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ddpbackup_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpbackup_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
