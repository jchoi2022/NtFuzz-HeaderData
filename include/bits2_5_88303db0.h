#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
typedef class BackgroundCopyManager2_5 BackgroundCopyManager2_5;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0000_v0_0_s_ifspec;
typedef
enum BG_CERT_STORE_LOCATION
    {
        BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE = ( BG_CERT_STORE_LOCATION_CURRENT_USER + 1 ) ,
        BG_CERT_STORE_LOCATION_CURRENT_SERVICE = ( BG_CERT_STORE_LOCATION_LOCAL_MACHINE + 1 ) ,
        BG_CERT_STORE_LOCATION_SERVICES = ( BG_CERT_STORE_LOCATION_CURRENT_SERVICE + 1 ) ,
        BG_CERT_STORE_LOCATION_USERS = ( BG_CERT_STORE_LOCATION_SERVICES + 1 ) ,
        BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = ( BG_CERT_STORE_LOCATION_USERS + 1 ) ,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = ( BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY + 1 ) ,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = ( BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY + 1 )
    } BG_CERT_STORE_LOCATION;
EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions;
    typedef struct IBackgroundCopyJobHttpOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJobHttpOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJobHttpOptions * This);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByID )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                                     __RPC__in_ecount_full(20) byte *pCertHashBlob);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByName )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                       __RPC__in LPCWSTR SubjectName);
        HRESULT ( STDMETHODCALLTYPE *RemoveClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                             __RPC__out BG_CERT_STORE_LOCATION *pStoreLocation,
                             __RPC__deref_out_opt LPWSTR *pStoreName,
                                               __RPC__deref_out_ecount_full_opt(20) byte **ppCertHashBlob,
                             __RPC__deref_out_opt LPWSTR *pSubjectName);
        HRESULT ( STDMETHODCALLTYPE *SetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                               __RPC__in_opt LPCWSTR RequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                             __RPC__deref_out_opt LPWSTR *pRequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                       ULONG Flags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions * This,
                             __RPC__out ULONG *pFlags);
        END_INTERFACE
    } IBackgroundCopyJobHttpOptionsVtbl;
    interface IBackgroundCopyJobHttpOptions
    {
        CONST_VTBL struct IBackgroundCopyJobHttpOptionsVtbl *lpVtbl;
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
EXTERN_C const IID LIBID_BackgroundCopyManager2_5;
EXTERN_C const CLSID CLSID_BackgroundCopyManager2_5;
class DECLSPEC_UUID("03ca98d6-ff5d-49b8-abc6-03dd84127020")
BackgroundCopyManager2_5;
#include "bits3_0.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0002_v0_0_s_ifspec;
}
