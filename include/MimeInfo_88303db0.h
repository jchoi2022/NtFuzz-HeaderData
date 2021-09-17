#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMimeInfo IMimeInfo;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0000_v0_0_s_ifspec;
typedef IMimeInfo *LPMIMEINFO;
EXTERN_C const IID IID_IMimeInfo;
    typedef struct IMimeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMimeInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMimeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMimeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetMimeCLSIDMapping )(
            IMimeInfo * This,
                        UINT *pcTypes,
                        LPCSTR **ppszTypes,
                        CLSID **ppclsID);
        END_INTERFACE
    } IMimeInfoVtbl;
    interface IMimeInfo
    {
        CONST_VTBL struct IMimeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMimeCLSIDMapping(This,pcTypes,ppszTypes,ppclsID) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0001_v0_0_s_ifspec;
}
