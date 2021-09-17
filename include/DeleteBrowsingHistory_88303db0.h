#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDeleteBrowsingHistory IDeleteBrowsingHistory;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID( CATID_DeleteBrowsingHistory, 0x31caf6e4,0xd6aa,0x4090,0xa0,0x50,0xa5,0xac,0x89,0x72,0xe9,0xef);
EXTERN_C const GUID CATID_DeleteBrowsingHistory;
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDeleteBrowsingHistory;
    typedef struct IDeleteBrowsingHistoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeleteBrowsingHistory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeleteBrowsingHistory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeleteBrowsingHistory * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteBrowsingHistory )(
            __RPC__in IDeleteBrowsingHistory * This,
            DWORD dwFlags);
        END_INTERFACE
    } IDeleteBrowsingHistoryVtbl;
    interface IDeleteBrowsingHistory
    {
        CONST_VTBL struct IDeleteBrowsingHistoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeleteBrowsingHistory(This,dwFlags) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0001_v0_0_s_ifspec;
}
