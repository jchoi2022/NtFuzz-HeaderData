#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IContextCallback IContextCallback;
#include "wtypes.h"
#include "objidl.h"
extern "C"{
typedef struct tagComCallData
    {
    DWORD dwDispid;
    DWORD dwReserved;
    void *pUserDefined;
    } ComCallData;
extern RPC_IF_HANDLE __MIDL_itf_ctxtcall_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctxtcall_0000_0000_v0_0_s_ifspec;
typedef HRESULT ( __stdcall *PFNCONTEXTCALL )(
    ComCallData *pParam);
EXTERN_C const IID IID_IContextCallback;
    typedef struct IContextCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IContextCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IContextCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IContextCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ContextCallback )(
            IContextCallback * This,
                       PFNCONTEXTCALL pfnCallback,
                       ComCallData *pParam,
                       REFIID riid,
                       int iMethod,
                       IUnknown *pUnk);
        END_INTERFACE
    } IContextCallbackVtbl;
    interface IContextCallback
    {
        CONST_VTBL struct IContextCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ContextCallback(This,pfnCallback,pParam,riid,iMethod,pUnk) )
}
