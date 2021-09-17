#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDMOWrapperFilter IDMOWrapperFilter;
#include "unknwn.h"
#include "objidl.h"
#include "mediaobj.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_DMOWrapperFilter, 0x94297043,0xbd82,0x4dfd,0xb0,0xde,0x81,0x77,0x73,0x9c,0x6d,0x20);
DEFINE_GUID(CLSID_DMOFilterCategory,0xbcd5796c,0xbd52,0x4d30,0xab,0x76,0x70,0xf9,0x75,0xb8,0x91,0x99);
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDMOWrapperFilter;
    typedef struct IDMOWrapperFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDMOWrapperFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDMOWrapperFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDMOWrapperFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IDMOWrapperFilter * This,
            __RPC__in REFCLSID clsidDMO,
            __RPC__in REFCLSID catDMO);
        END_INTERFACE
    } IDMOWrapperFilterVtbl;
    interface IDMOWrapperFilter
    {
        CONST_VTBL struct IDMOWrapperFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,clsidDMO,catDMO) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0001_v0_0_s_ifspec;
}
