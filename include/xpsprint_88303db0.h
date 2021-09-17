#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IXpsPrintJobStream IXpsPrintJobStream;
typedef interface IXpsPrintJob IXpsPrintJob;
#include "oaidl.h"
#include "ocidl.h"
#include "xpsobjectmodel.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0000_v0_0_s_ifspec;
typedef
enum __MIDL___MIDL_itf_xpsprint_0000_0000_0001
    {
        XPS_JOB_IN_PROGRESS = 0,
        XPS_JOB_COMPLETED = ( XPS_JOB_IN_PROGRESS + 1 ) ,
        XPS_JOB_CANCELLED = ( XPS_JOB_COMPLETED + 1 ) ,
        XPS_JOB_FAILED = ( XPS_JOB_CANCELLED + 1 )
    } XPS_JOB_COMPLETION;
typedef struct __MIDL___MIDL_itf_xpsprint_0000_0000_0002
    {
    UINT32 jobId;
    INT32 currentDocument;
    INT32 currentPage;
    INT32 currentPageTotal;
    XPS_JOB_COMPLETION completion;
    HRESULT jobStatus;
    } XPS_JOB_STATUS;
EXTERN_C const IID LIBID_XpsPrint;
EXTERN_C const IID IID_IXpsPrintJobStream;
    typedef struct IXpsPrintJobStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsPrintJobStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsPrintJobStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsPrintJobStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IXpsPrintJobStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IXpsPrintJobStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IXpsPrintJobStream * This);
        END_INTERFACE
    } IXpsPrintJobStreamVtbl;
    interface IXpsPrintJobStream
    {
        CONST_VTBL struct IXpsPrintJobStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IXpsPrintJob;
    typedef struct IXpsPrintJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsPrintJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsPrintJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsPrintJob * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IXpsPrintJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetJobStatus )(
            __RPC__in IXpsPrintJob * This,
                                __RPC__out XPS_JOB_STATUS *jobStatus);
        END_INTERFACE
    } IXpsPrintJobVtbl;
    interface IXpsPrintJob
    {
        CONST_VTBL struct IXpsPrintJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetJobStatus(This,jobStatus) )
                          HRESULT __stdcall StartXpsPrintJob(
                       __RPC__in_string LPCWSTR printerName,
                       __RPC__in_string LPCWSTR jobName,
                       __RPC__in_string LPCWSTR outputFileName,
               __RPC__in HANDLE progressEvent,
               __RPC__in HANDLE completionEvent,
                        __RPC__in_ecount_full(printablePagesOnCount) UINT8 *printablePagesOn,
               UINT32 printablePagesOnCount,
                __RPC__deref_out_opt IXpsPrintJob **xpsPrintJob,
                __RPC__deref_out_opt IXpsPrintJobStream **documentStream,
                __RPC__deref_out_opt IXpsPrintJobStream **printTicketStream);
                          HRESULT __stdcall StartXpsPrintJob1(
                       __RPC__in_string LPCWSTR printerName,
                       __RPC__in_string LPCWSTR jobName,
                       __RPC__in_string LPCWSTR outputFileName,
               __RPC__in HANDLE progressEvent,
               __RPC__in HANDLE completionEvent,
                __RPC__deref_out_opt IXpsPrintJob **xpsPrintJob,
                __RPC__deref_out_opt IXpsOMPackageTarget **printContentReceiver);
#pragma deprecated(StartXpsPrintJob,StartXpsPrintJob1,IXpsPrintJob,IXpsPrintStream,XPS_JOB_STATUS,XPS_JOB_COMPLETION)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0001_v0_0_s_ifspec;
}
