#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWaaSAssessor IWaaSAssessor;
typedef class WaaSAssessor WaaSAssessor;
#include "WaaSAPITypes.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWaaSAssessor;
    typedef struct IWaaSAssessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWaaSAssessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWaaSAssessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWaaSAssessor * This);
        HRESULT ( STDMETHODCALLTYPE *GetOSUpdateAssessment )(
            __RPC__in IWaaSAssessor * This,
                                __RPC__out OSUpdateAssessment *result);
        END_INTERFACE
    } IWaaSAssessorVtbl;
    interface IWaaSAssessor
    {
        CONST_VTBL struct IWaaSAssessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOSUpdateAssessment(This,result) )
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID LIBID_WaaSAssessorLib;
EXTERN_C const CLSID CLSID_WaaSAssessor;
class DECLSPEC_UUID("098ef871-fa9f-46af-8958-c083515d7c9c")
WaaSAssessor;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_waasapi_0000_0002_v0_0_s_ifspec;
}
