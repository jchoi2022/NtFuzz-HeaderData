#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAsyncInfo IAsyncInfo;
#include "inspectable.h"
extern "C"{
       
namespace ABI { namespace Windows { namespace Foundation {
enum class AsyncStatus {
  Started = 0,
  Completed,
  Canceled,
  Error,
};
} } }
using ABI::Windows::Foundation::AsyncStatus;
static const ABI::Windows::Foundation::AsyncStatus Started = AsyncStatus::Started;
static const ABI::Windows::Foundation::AsyncStatus Completed = AsyncStatus::Completed;
static const ABI::Windows::Foundation::AsyncStatus Canceled = AsyncStatus::Canceled;
static const ABI::Windows::Foundation::AsyncStatus Error = AsyncStatus::Error;
extern RPC_IF_HANDLE __MIDL_itf_asyncinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_asyncinfo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAsyncInfo;
    typedef struct IAsyncInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAsyncInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAsyncInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAsyncInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IAsyncInfo * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IAsyncInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IAsyncInfo * This,
                        __RPC__out TrustLevel *trustLevel);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out unsigned __int32 *id);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out AsyncStatus *status);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out HRESULT *errorCode);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IAsyncInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAsyncInfo * This);
        END_INTERFACE
    } IAsyncInfoVtbl;
    interface IAsyncInfo
    {
        CONST_VTBL struct IAsyncInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Status(This,status) )
    ( (This)->lpVtbl -> get_ErrorCode(This,errorCode) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Close(This) )
namespace ABI { namespace Windows { namespace Foundation {
using ::IAsyncInfo;
} } }
extern RPC_IF_HANDLE __MIDL_itf_asyncinfo_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_asyncinfo_0000_0001_v0_0_s_ifspec;
}
