#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICreatePropBagOnRegKey ICreatePropBagOnRegKey;
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICreatePropBagOnRegKey;
    typedef struct ICreatePropBagOnRegKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreatePropBagOnRegKey * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreatePropBagOnRegKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreatePropBagOnRegKey * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            ICreatePropBagOnRegKey * This,
                       HKEY hkey,
                       LPCOLESTR subkey,
                       DWORD ulOptions,
                       DWORD samDesired,
            REFIID iid,
                        LPVOID *ppBag);
        END_INTERFACE
    } ICreatePropBagOnRegKeyVtbl;
    interface ICreatePropBagOnRegKey
    {
        CONST_VTBL struct ICreatePropBagOnRegKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0001_v0_0_s_ifspec;
}
