#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPersistHistory IPersistHistory;
#include "objidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IPersistHistory *LPPERSISTHISTORY;
EXTERN_C const IID IID_IPersistHistory;
    typedef struct IPersistHistoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistHistory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistHistory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistHistory * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistHistory * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *LoadHistory )(
            __RPC__in IPersistHistory * This,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in_opt IBindCtx *pbc);
        HRESULT ( STDMETHODCALLTYPE *SaveHistory )(
            __RPC__in IPersistHistory * This,
                       __RPC__in_opt IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *SetPositionCookie )(
            __RPC__in IPersistHistory * This,
                       DWORD dwPositioncookie);
        HRESULT ( STDMETHODCALLTYPE *GetPositionCookie )(
            __RPC__in IPersistHistory * This,
                        __RPC__out DWORD *pdwPositioncookie);
        END_INTERFACE
    } IPersistHistoryVtbl;
    interface IPersistHistory
    {
        CONST_VTBL struct IPersistHistoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> LoadHistory(This,pStream,pbc) )
    ( (This)->lpVtbl -> SaveHistory(This,pStream) )
    ( (This)->lpVtbl -> SetPositionCookie(This,dwPositioncookie) )
    ( (This)->lpVtbl -> GetPositionCookie(This,pdwPositioncookie) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0001_v0_0_s_ifspec;
}
