#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyServerCertificateValidationCallback IBackgroundCopyServerCertificateValidationCallback;
typedef interface IBackgroundCopyJobHttpOptions3 IBackgroundCopyJobHttpOptions3;
typedef class BackgroundCopyManager10_3 BackgroundCopyManager10_3;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"
#include "bits10_1.h"
#include "bits10_2.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits10_3_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_3_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyServerCertificateValidationCallback;
    typedef struct IBackgroundCopyServerCertificateValidationCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyServerCertificateValidationCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyServerCertificateValidationCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyServerCertificateValidationCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ValidateServerCertificate )(
            __RPC__in IBackgroundCopyServerCertificateValidationCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *job,
                       __RPC__in_opt IBackgroundCopyFile *file,
                       DWORD certLength,
                                __RPC__in_ecount_full(certLength) const BYTE certData[ ],
                       DWORD certEncodingType,
                       DWORD certStoreLength,
                                __RPC__in_ecount_full(certStoreLength) const BYTE certStoreData[ ]);
        END_INTERFACE
    } IBackgroundCopyServerCertificateValidationCallbackVtbl;
    interface IBackgroundCopyServerCertificateValidationCallback
    {
        CONST_VTBL struct IBackgroundCopyServerCertificateValidationCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ValidateServerCertificate(This,job,file,certLength,certData,certEncodingType,certStoreLength,certStoreData) )
EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions3;
    typedef struct IBackgroundCopyJobHttpOptions3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByID )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                                     __RPC__in_ecount_full(20) byte *pCertHashBlob);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateByName )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       BG_CERT_STORE_LOCATION StoreLocation,
                       __RPC__in LPCWSTR StoreName,
                       __RPC__in LPCWSTR SubjectName);
        HRESULT ( STDMETHODCALLTYPE *RemoveClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCertificate )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                             __RPC__out BG_CERT_STORE_LOCATION *pStoreLocation,
                             __RPC__deref_out_opt LPWSTR *pStoreName,
                                               __RPC__deref_out_ecount_full_opt(20) byte **ppCertHashBlob,
                             __RPC__deref_out_opt LPWSTR *pSubjectName);
        HRESULT ( STDMETHODCALLTYPE *SetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                               __RPC__in_opt LPCWSTR RequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetCustomHeaders )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                             __RPC__deref_out_opt LPWSTR *pRequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       ULONG Flags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityFlags )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                             __RPC__out ULONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SetHttpMethod )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       __RPC__in LPCWSTR method);
        HRESULT ( STDMETHODCALLTYPE *GetHttpMethod )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                        __RPC__deref_out_opt LPWSTR *method);
        HRESULT ( STDMETHODCALLTYPE *SetServerCertificateValidationInterface )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This,
                       __RPC__in_opt IUnknown *certValidationCallback);
        HRESULT ( STDMETHODCALLTYPE *MakeCustomHeadersWriteOnly )(
            __RPC__in IBackgroundCopyJobHttpOptions3 * This);
        END_INTERFACE
    } IBackgroundCopyJobHttpOptions3Vtbl;
    interface IBackgroundCopyJobHttpOptions3
    {
        CONST_VTBL struct IBackgroundCopyJobHttpOptions3Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> SetServerCertificateValidationInterface(This,certValidationCallback) )
    ( (This)->lpVtbl -> MakeCustomHeadersWriteOnly(This) )
EXTERN_C const IID LIBID_BackgroundCopyManager10_3;
EXTERN_C const CLSID CLSID_BackgroundCopyManager10_3;
class DECLSPEC_UUID("5FD42AD5-C04E-4D36-ADC7-E08FF15737AD")
BackgroundCopyManager10_3;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits10_3_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_3_0000_0003_v0_0_s_ifspec;
}
