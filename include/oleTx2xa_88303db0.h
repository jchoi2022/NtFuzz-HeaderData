#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDtcToXaMapper IDtcToXaMapper;
typedef interface IDtcToXaHelperFactory IDtcToXaHelperFactory;
typedef interface IDtcToXaHelper IDtcToXaHelper;
typedef interface IDtcToXaHelperSinglePipe IDtcToXaHelperSinglePipe;
#include "unknwn.h"
#include "transact.h"
#include "txcoord.h"
#include "xa.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0000_v0_0_s_ifspec;
typedef DWORD XA_SWITCH_FLAGS;
const XID XID_NULL = {-1,0,0,'\0'};
extern RPC_IF_HANDLE XaMapperTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE XaMapperTypes_v0_0_s_ifspec;
HRESULT __cdecl GetXaSwitch(
               XA_SWITCH_FLAGS XaSwitchFlags,
                xa_switch_t **ppXaSwitch);
extern RPC_IF_HANDLE XaMapperAPIs_v0_0_c_ifspec;
extern RPC_IF_HANDLE XaMapperAPIs_v0_0_s_ifspec;
EXTERN_C const IID IID_IDtcToXaMapper;
    typedef struct IDtcToXaMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcToXaMapper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcToXaMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcToXaMapper * This);
        HRESULT ( STDMETHODCALLTYPE *RequestNewResourceManager )(
            __RPC__in IDtcToXaMapper * This,
                       __RPC__in char *pszDSN,
                       __RPC__in char *pszClientDllName,
                            __RPC__inout DWORD *pdwRMCookie);
        HRESULT ( STDMETHODCALLTYPE *TranslateTridToXid )(
            __RPC__in IDtcToXaMapper * This,
                       __RPC__in DWORD *pdwITransaction,
                       DWORD dwRMCookie,
                            __RPC__inout XID *pXid);
        HRESULT ( STDMETHODCALLTYPE *EnlistResourceManager )(
            __RPC__in IDtcToXaMapper * This,
                       DWORD dwRMCookie,
                       __RPC__in DWORD *pdwITransaction);
        HRESULT ( STDMETHODCALLTYPE *ReleaseResourceManager )(
            __RPC__in IDtcToXaMapper * This,
                       DWORD dwRMCookie);
        END_INTERFACE
    } IDtcToXaMapperVtbl;
    interface IDtcToXaMapper
    {
        CONST_VTBL struct IDtcToXaMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestNewResourceManager(This,pszDSN,pszClientDllName,pdwRMCookie) )
    ( (This)->lpVtbl -> TranslateTridToXid(This,pdwITransaction,dwRMCookie,pXid) )
    ( (This)->lpVtbl -> EnlistResourceManager(This,dwRMCookie,pdwITransaction) )
    ( (This)->lpVtbl -> ReleaseResourceManager(This,dwRMCookie) )
EXTERN_C const IID IID_IDtcToXaHelperFactory;
    typedef struct IDtcToXaHelperFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcToXaHelperFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcToXaHelperFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcToXaHelperFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IDtcToXaHelperFactory * This,
                       __RPC__in char *pszDSN,
                       __RPC__in char *pszClientDllName,
                        __RPC__out GUID *pguidRm,
                        __RPC__deref_out_opt IDtcToXaHelper **ppXaHelper);
        END_INTERFACE
    } IDtcToXaHelperFactoryVtbl;
    interface IDtcToXaHelperFactory
    {
        CONST_VTBL struct IDtcToXaHelperFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pszDSN,pszClientDllName,pguidRm,ppXaHelper) )
EXTERN_C const IID IID_IDtcToXaHelper;
    typedef struct IDtcToXaHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcToXaHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcToXaHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcToXaHelper * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IDtcToXaHelper * This,
                       BOOL i_fDoRecovery);
        HRESULT ( STDMETHODCALLTYPE *TranslateTridToXid )(
            __RPC__in IDtcToXaHelper * This,
                       __RPC__in_opt ITransaction *pITransaction,
                       __RPC__in GUID *pguidBqual,
                        __RPC__out XID *pXid);
        END_INTERFACE
    } IDtcToXaHelperVtbl;
    interface IDtcToXaHelper
    {
        CONST_VTBL struct IDtcToXaHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Close(This,i_fDoRecovery) )
    ( (This)->lpVtbl -> TranslateTridToXid(This,pITransaction,pguidBqual,pXid) )
EXTERN_C const IID IID_IDtcToXaHelperSinglePipe;
    typedef struct IDtcToXaHelperSinglePipeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcToXaHelperSinglePipe * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcToXaHelperSinglePipe * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcToXaHelperSinglePipe * This);
        HRESULT ( STDMETHODCALLTYPE *XARMCreate )(
            IDtcToXaHelperSinglePipe * This,
            _Null_terminated_ char *pszDSN,
            _Null_terminated_ char *pszClientDll,
                            DWORD *pdwRMCookie);
        HRESULT ( STDMETHODCALLTYPE *ConvertTridToXID )(
            IDtcToXaHelperSinglePipe * This,
                       DWORD *pdwITrans,
                       DWORD dwRMCookie,
                            XID *pxid);
        HRESULT ( STDMETHODCALLTYPE *EnlistWithRM )(
            IDtcToXaHelperSinglePipe * This,
                       DWORD dwRMCookie,
                       ITransaction *i_pITransaction,
                       ITransactionResourceAsync *i_pITransRes,
                        ITransactionEnlistmentAsync **o_ppITransEnslitment);
        void ( STDMETHODCALLTYPE *ReleaseRMCookie )(
            IDtcToXaHelperSinglePipe * This,
                       DWORD i_dwRMCookie,
                       BOOL i_fNormal);
        END_INTERFACE
    } IDtcToXaHelperSinglePipeVtbl;
    interface IDtcToXaHelperSinglePipe
    {
        CONST_VTBL struct IDtcToXaHelperSinglePipeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> XARMCreate(This,pszDSN,pszClientDll,pdwRMCookie) )
    ( (This)->lpVtbl -> ConvertTridToXID(This,pdwITrans,dwRMCookie,pxid) )
    ( (This)->lpVtbl -> EnlistWithRM(This,dwRMCookie,i_pITransaction,i_pITransRes,o_ppITransEnslitment) )
    ( (This)->lpVtbl -> ReleaseRMCookie(This,i_dwRMCookie,i_fNormal) )
DEFINE_GUID(IID_IDtcToXaMapper, 0x64FFABE0, 0x7CE9, 0x11d0, 0x8C, 0xE6, 0x00, 0xC0, 0x4F, 0xDC, 0x87, 0x7E);
DEFINE_GUID(IID_IDtcToXaHelperFactory, 0xadefc46a, 0xcb1d, 0x11d0, 0xb1, 0x35, 0x00, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_IDtcToXaHelper, 0xadefc46b, 0xcb1d, 0x11d0, 0xb1, 0x35, 0x00, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_IDtcToXaHelperSinglePipe, 0x47ED4971, 0x53B3, 0x11d1, 0xBB, 0xB9, 0x00, 0xC0, 0x4F, 0xD6, 0x58, 0xF6);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0006_v0_0_s_ifspec;
}
