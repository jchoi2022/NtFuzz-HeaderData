#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInspectable IInspectable;
#include "wtypes.h"
#include "unknwn.h"
#include "hstring.h"
extern "C"{
typedef __RPC_unique_pointer IInspectable *LPINSPECTABLE;
typedef
enum TrustLevel
    {
        BaseTrust = 0,
        PartialTrust = ( BaseTrust + 1 ) ,
        FullTrust = ( PartialTrust + 1 )
    } TrustLevel;
extern RPC_IF_HANDLE __MIDL_itf_inspectable_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inspectable_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInspectable;
    typedef struct IInspectableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInspectable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInspectable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInspectable * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
        END_INTERFACE
    } IInspectableVtbl;
    interface IInspectable
    {
        CONST_VTBL struct IInspectableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
extern RPC_IF_HANDLE __MIDL_itf_inspectable_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inspectable_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER HSTRING_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree( __RPC__in unsigned long *, __RPC__in HSTRING * );
unsigned long __RPC_USER HSTRING_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree64( __RPC__in unsigned long *, __RPC__in HSTRING * );
}
