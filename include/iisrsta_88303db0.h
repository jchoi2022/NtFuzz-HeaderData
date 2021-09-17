#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IIisServiceControl IIisServiceControl;
typedef class IisServiceControl IisServiceControl;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(IID_IIisServiceControl, 0xE8FB8620, 0x588F, 0x11d2, 0x9d, 0x61, 0x0,0xc0, 0x4f, 0x79, 0xc5, 0xfe);
DEFINE_GUID(CLSID_IisServiceControl, 0xE8FB8621, 0x588F, 0x11d2, 0x9d, 0x61, 0x0,0xc0, 0x4f, 0x79, 0xc5, 0xfe);
DEFINE_GUID(LIBID_IISRSTALib, 0xE8FB8614, 0x588F, 0x11d2, 0x9d, 0x61, 0x0,0xc0, 0x4f, 0x79, 0xc5, 0xfe);
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IIisServiceControl;
    typedef struct IIisServiceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIisServiceControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIisServiceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIisServiceControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IIisServiceControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IIisServiceControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IIisServiceControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIisServiceControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IIisServiceControl * This,
            DWORD dwTimeoutMsecs,
            DWORD dwForce);
                               HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IIisServiceControl * This,
            DWORD dwTimeoutMsecs);
                               HRESULT ( STDMETHODCALLTYPE *Reboot )(
            __RPC__in IIisServiceControl * This,
            DWORD dwTimeouMsecs,
            DWORD dwForceAppsClosed);
                               HRESULT ( STDMETHODCALLTYPE *Status )(
            __RPC__in IIisServiceControl * This,
                       DWORD dwBufferSize,
                                 __RPC__out_ecount_full(dwBufferSize) unsigned char *pbBuffer,
                        __RPC__out DWORD *pdwMDRequiredBufferSize,
                        __RPC__out DWORD *pdwNumServices);
                               HRESULT ( STDMETHODCALLTYPE *Kill )(
            __RPC__in IIisServiceControl * This);
        END_INTERFACE
    } IIisServiceControlVtbl;
    interface IIisServiceControl
    {
        CONST_VTBL struct IIisServiceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Stop(This,dwTimeoutMsecs,dwForce) )
    ( (This)->lpVtbl -> Start(This,dwTimeoutMsecs) )
    ( (This)->lpVtbl -> Reboot(This,dwTimeouMsecs,dwForceAppsClosed) )
    ( (This)->lpVtbl -> Status(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize,pdwNumServices) )
    ( (This)->lpVtbl -> Kill(This) )
EXTERN_C const IID LIBID_IISRSTALib;
EXTERN_C const CLSID CLSID_IisServiceControl;
class DECLSPEC_UUID("E8FB8621-588F-11D2-9D61-00C04F79C5FE")
IisServiceControl;
typedef struct {
DWORD iServiceName;
DWORD iDisplayName;
SERVICE_STATUS ServiceStatus;
} SERIALIZED_ENUM_SERVICE_STATUS;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0002_v0_0_s_ifspec;
}
