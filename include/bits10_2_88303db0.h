#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJobHttpOptions2 IBackgroundCopyJobHttpOptions2;
typedef class BackgroundCopyManager10_2 BackgroundCopyManager10_2;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"
#include "bits10_1.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits10_2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_2_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions2;
    typedef struct IBackgroundCopyJobHttpOptions2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByID )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                                     __RPC__in_ecount_full(20) byte *pCertHashBlob);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByName )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                       __RPC__in LPCWSTR SubjectName);
        HRESULT ( STDMETHODCALLTYPE *RemoveClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                             __RPC__out BG_CERT_STORE_LOCATION *pStoreLocation,
                             __RPC__deref_out_opt LPWSTR *pStoreName,
                                               __RPC__deref_out_ecount_full_opt(20) byte **ppCertHashBlob,
                             __RPC__deref_out_opt LPWSTR *pSubjectName);
        HRESULT ( STDMETHODCALLTYPE *SetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                               __RPC__in_opt LPCWSTR RequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                             __RPC__deref_out_opt LPWSTR *pRequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                       ULONG Flags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                             __RPC__out ULONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SetHttpMethod )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                       __RPC__in LPCWSTR method);
        HRESULT ( STDMETHODCALLTYPE *GetHttpMethod )(
            __RPC__in IBackgroundCopyJobHttpOptions2 * This,
                        __RPC__deref_out_opt LPWSTR *method);
        END_INTERFACE
    } IBackgroundCopyJobHttpOptions2Vtbl;
    interface IBackgroundCopyJobHttpOptions2
    {
        CONST_VTBL struct IBackgroundCopyJobHttpOptions2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) )
    ( (This)->lpVtbl -> SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) )
    ( (This)->lpVtbl -> RemoveClientCertificate(This) )
    ( (This)->lpVtbl -> GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) )
    ( (This)->lpVtbl -> SetCustomHeaders(This,RequestHeaders) )
    ( (This)->lpVtbl -> GetCustomHeaders(This,pRequestHeaders) )
    ( (This)->lpVtbl -> SetSecurityFlags(This,Flags) )
    ( (This)->lpVtbl -> GetSecurityFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetHttpMethod(This,method) )
    ( (This)->lpVtbl -> GetHttpMethod(This,method) )
EXTERN_C const IID LIBID_BackgroundCopyManager10_2;
EXTERN_C const CLSID CLSID_BackgroundCopyManager10_2;
class DECLSPEC_UUID("4575438F-A6C8-4976-B0FE-2F26B80D959E")
BackgroundCopyManager10_2;
#include "bits10_3.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits10_2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_2_0000_0002_v0_0_s_ifspec;
}
