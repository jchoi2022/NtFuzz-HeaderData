#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertRequestD ICertRequestD;
typedef interface ICertRequestD2 ICertRequestD2;
#include "certbase.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certreqd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certreqd_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertRequestD;
    typedef struct ICertRequestDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertRequestD * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertRequestD * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertRequestD * This);
        HRESULT ( STDMETHODCALLTYPE *Request )(
            __RPC__in ICertRequestD * This,
                       DWORD dwFlags,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                                 __RPC__inout DWORD *pdwRequestId,
                        __RPC__out DWORD *pdwDisposition,
                                              __RPC__in_opt_string const wchar_t *pwszAttributes,
                            __RPC__in const CERTTRANSBLOB *pctbRequest,
                             __RPC__out CERTTRANSBLOB *pctbCertChain,
                             __RPC__out CERTTRANSBLOB *pctbEncodedCert,
                             __RPC__out CERTTRANSBLOB *pctbDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCACert )(
            __RPC__in ICertRequestD * This,
                       DWORD fchain,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                             __RPC__out CERTTRANSBLOB *pctbOut);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in ICertRequestD * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority);
        END_INTERFACE
    } ICertRequestDVtbl;
    interface ICertRequestD
    {
        CONST_VTBL struct ICertRequestDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage) )
    ( (This)->lpVtbl -> GetCACert(This,fchain,pwszAuthority,pctbOut) )
    ( (This)->lpVtbl -> Ping(This,pwszAuthority) )
EXTERN_C const IID IID_ICertRequestD2;
    typedef struct ICertRequestD2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertRequestD2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertRequestD2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertRequestD2 * This);
        HRESULT ( STDMETHODCALLTYPE *Request )(
            __RPC__in ICertRequestD2 * This,
                       DWORD dwFlags,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                                 __RPC__inout DWORD *pdwRequestId,
                        __RPC__out DWORD *pdwDisposition,
                                              __RPC__in_opt_string const wchar_t *pwszAttributes,
                            __RPC__in const CERTTRANSBLOB *pctbRequest,
                             __RPC__out CERTTRANSBLOB *pctbCertChain,
                             __RPC__out CERTTRANSBLOB *pctbEncodedCert,
                             __RPC__out CERTTRANSBLOB *pctbDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCACert )(
            __RPC__in ICertRequestD2 * This,
                       DWORD fchain,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                             __RPC__out CERTTRANSBLOB *pctbOut);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in ICertRequestD2 * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority);
        HRESULT ( STDMETHODCALLTYPE *Request2 )(
            __RPC__in ICertRequestD2 * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                       DWORD dwFlags,
                                              __RPC__in_opt_string const wchar_t *pwszSerialNumber,
                                 __RPC__inout DWORD *pdwRequestId,
                        __RPC__out DWORD *pdwDisposition,
                                              __RPC__in_opt_string const wchar_t *pwszAttributes,
                            __RPC__in const CERTTRANSBLOB *pctbRequest,
                             __RPC__out CERTTRANSBLOB *pctbFullResponse,
                             __RPC__out CERTTRANSBLOB *pctbEncodedCert,
                             __RPC__out CERTTRANSBLOB *pctbDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCAProperty )(
            __RPC__in ICertRequestD2 * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                             __RPC__out CERTTRANSBLOB *pctbPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyInfo )(
            __RPC__in ICertRequestD2 * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority,
                        __RPC__out LONG *pcProperty,
                             __RPC__out CERTTRANSBLOB *pctbPropInfo);
        HRESULT ( STDMETHODCALLTYPE *Ping2 )(
            __RPC__in ICertRequestD2 * This,
                                              __RPC__in_opt_string const wchar_t *pwszAuthority);
        END_INTERFACE
    } ICertRequestD2Vtbl;
    interface ICertRequestD2
    {
        CONST_VTBL struct ICertRequestD2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage) )
    ( (This)->lpVtbl -> GetCACert(This,fchain,pwszAuthority,pctbOut) )
    ( (This)->lpVtbl -> Ping(This,pwszAuthority) )
    ( (This)->lpVtbl -> Request2(This,pwszAuthority,dwFlags,pwszSerialNumber,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbFullResponse,pctbEncodedCert,pctbDispositionMessage) )
    ( (This)->lpVtbl -> GetCAProperty(This,pwszAuthority,PropId,PropIndex,PropType,pctbPropertyValue) )
    ( (This)->lpVtbl -> GetCAPropertyInfo(This,pwszAuthority,pcProperty,pctbPropInfo) )
    ( (This)->lpVtbl -> Ping2(This,pwszAuthority) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certreqd_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certreqd_0000_0002_v0_0_s_ifspec;
}
