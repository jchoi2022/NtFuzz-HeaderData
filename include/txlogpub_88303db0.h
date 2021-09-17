#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ILog ILog;
typedef interface IFileBasedLogInit IFileBasedLogInit;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LARGE_INTEGER LSN;
typedef
enum RECORD_READING_POLICY
    {
        RECORD_READING_POLICY_FORWARD = 1,
        RECORD_READING_POLICY_BACKWARD = 2,
        RECORD_READING_POLICY_RANDOM = 3
    } RECORD_READING_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ILog;
    typedef struct ILogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILog * This);
        HRESULT ( STDMETHODCALLTYPE *Force )(
            __RPC__in ILog * This,
                       LSN lsnMinToForce);
        HRESULT ( STDMETHODCALLTYPE *AppendRecord )(
            __RPC__in ILog * This,
                                __RPC__in_ecount_full(cBlob) BLOB *rgBlob,
                       ULONG cBlob,
                       BOOL fForceNow,
                                    __RPC__inout_opt LSN *plsn);
        HRESULT ( STDMETHODCALLTYPE *ReadRecord )(
            __RPC__in ILog * This,
                       LSN lsnToRead,
                                    __RPC__inout_opt LSN *plsnPrev,
                                    __RPC__inout_opt LSN *plsnNext,
                                          __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                        __RPC__out ULONG *pcbData);
        HRESULT ( STDMETHODCALLTYPE *ReadRecordPrefix )(
            __RPC__in ILog * This,
                       LSN lsnToRead,
                                    __RPC__inout_opt LSN *plsnPrev,
                                    __RPC__inout_opt LSN *plsnNext,
                                 __RPC__out_ecount_full(*pcbData) BYTE *pbData,
                            __RPC__inout ULONG *pcbData,
                        __RPC__out ULONG *pcbRecord);
        HRESULT ( STDMETHODCALLTYPE *GetLogLimits )(
            __RPC__in ILog * This,
                                    __RPC__inout_opt LSN *plsnFirst,
                                    __RPC__inout_opt LSN *plsnLast);
        HRESULT ( STDMETHODCALLTYPE *TruncatePrefix )(
            __RPC__in ILog * This,
                       LSN lsnFirstToKeep);
        HRESULT ( STDMETHODCALLTYPE *SetAccessPolicyHint )(
            __RPC__in ILog * This,
                       RECORD_READING_POLICY policy);
        END_INTERFACE
    } ILogVtbl;
    interface ILog
    {
        CONST_VTBL struct ILogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Force(This,lsnMinToForce) )
    ( (This)->lpVtbl -> AppendRecord(This,rgBlob,cBlob,fForceNow,plsn) )
    ( (This)->lpVtbl -> ReadRecord(This,lsnToRead,plsnPrev,plsnNext,ppbData,pcbData) )
    ( (This)->lpVtbl -> ReadRecordPrefix(This,lsnToRead,plsnPrev,plsnNext,pbData,pcbData,pcbRecord) )
    ( (This)->lpVtbl -> GetLogLimits(This,plsnFirst,plsnLast) )
    ( (This)->lpVtbl -> TruncatePrefix(This,lsnFirstToKeep) )
    ( (This)->lpVtbl -> SetAccessPolicyHint(This,policy) )
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileBasedLogInit;
    typedef struct IFileBasedLogInitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileBasedLogInit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileBasedLogInit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileBasedLogInit * This);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IFileBasedLogInit * This,
                       __RPC__in LPCWSTR filename,
                       ULONG cbCapacityHint);
        END_INTERFACE
    } IFileBasedLogInitVtbl;
    interface IFileBasedLogInit
    {
        CONST_VTBL struct IFileBasedLogInitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitNew(This,filename,cbCapacityHint) )
EXTERN_C const CLSID CLSID_SimpleFileBasedLog;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0002_v0_0_s_ifspec;
}
