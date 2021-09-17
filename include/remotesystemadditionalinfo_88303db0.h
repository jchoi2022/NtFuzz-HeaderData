#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRemoteSystemAdditionalInfoProvider IRemoteSystemAdditionalInfoProvider;
#include "unknwn.h"
#include "hstring.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_remotesystemadditionalinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_remotesystemadditionalinfo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRemoteSystemAdditionalInfoProvider;
    typedef struct IRemoteSystemAdditionalInfoProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteSystemAdditionalInfoProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteSystemAdditionalInfoProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteSystemAdditionalInfoProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdditionalInfo )(
            __RPC__in IRemoteSystemAdditionalInfoProvider * This,
                        __RPC__deref_out_opt HSTRING *deduplicationId,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **mapView);
        END_INTERFACE
    } IRemoteSystemAdditionalInfoProviderVtbl;
    interface IRemoteSystemAdditionalInfoProvider
    {
        CONST_VTBL struct IRemoteSystemAdditionalInfoProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdditionalInfo(This,deduplicationId,riid,mapView) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_remotesystemadditionalinfo_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_remotesystemadditionalinfo_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER HSTRING_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree( __RPC__in unsigned long *, __RPC__in HSTRING * );
unsigned long __RPC_USER HSTRING_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree64( __RPC__in unsigned long *, __RPC__in HSTRING * );
}
