#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioEndpointFormatControl IAudioEndpointFormatControl;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_audioendpoints_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioendpoints_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioEndpointFormatControl;
    typedef struct IAudioEndpointFormatControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointFormatControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointFormatControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointFormatControl * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetToDefault )(
            IAudioEndpointFormatControl * This,
            _In_ DWORD ResetFlags);
        END_INTERFACE
    } IAudioEndpointFormatControlVtbl;
    interface IAudioEndpointFormatControl
    {
        CONST_VTBL struct IAudioEndpointFormatControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResetToDefault(This,ResetFlags) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audioendpoints_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioendpoints_0000_0001_v0_0_s_ifspec;
}
