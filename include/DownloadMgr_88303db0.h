#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDownloadManager IDownloadManager;
#include "unknwn.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
DEFINE_GUID(IID_IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb, 0x80, 0x0, 0x10, 0x4b, 0x35, 0xe7, 0xf9);
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDownloadManager;
    typedef struct IDownloadManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDownloadManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDownloadManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDownloadManager * This);
        HRESULT ( STDMETHODCALLTYPE *Download )(
            IDownloadManager * This,
                       IMoniker *pmk,
                       IBindCtx *pbc,
                       DWORD dwBindVerb,
                       LONG grfBINDF,
                       BINDINFO *pBindInfo,
                       LPCOLESTR pszHeaders,
                       LPCOLESTR pszRedir,
                       UINT uiCP);
        END_INTERFACE
    } IDownloadManagerVtbl;
    interface IDownloadManager
    {
        CONST_VTBL struct IDownloadManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0001_v0_0_s_ifspec;
}
